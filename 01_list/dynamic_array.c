
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int* arr;
	int len;
	int alloc_len;
} Array;

void array_init(Array* a) {
	a->len = 0;
	a->alloc_len = 4;
	a->arr = malloc(sizeof(a->arr[0]) * a->alloc_len);
}

void array_free(Array* a) {
	free(a->arr);
}

void array_resize(Array* a, int new_len) {
	if (new_len > a->alloc_len //< Too small
		|| (a->alloc_len > 4 && a->alloc_len > (a->len * 4))) { //< Too big 

		int new_alloc_len = (new_len * 2) + 1;
		
		int* new_arr = malloc(new_alloc_len * sizeof(a->arr[0]));
		int i;
		for (i = 0; i < a->len; i++)
			new_arr[i] = a->arr[i];

		free(a->arr);
		a->alloc_len = new_alloc_len;
		a->arr = new_arr;
	}
	a->len = new_len;
}

void array_append(Array* a, int v) {
	array_resize(a, a->len + 1);

	a->arr[a->len - 1] = v;
}

int array_delete_last(Array* a) {
	if (a->len > 0) {
		int res = a->arr[a->len - 1];
		array_resize(a, a->len - 1);
		return res;
	} else {
		abort();
	}
}

void array_print_stats(Array* a) {
	printf("len: %d, alloc_len: %d, elements: ", a->len, a->alloc_len);
	int i;
	for (i = 0; i < a->len; i++) {
		printf("%d  ", a->arr[i]);
	}
	printf("\n");
}

int main() {
	Array a[1];

	array_init(a);
	printf("New array: \n");
	array_print_stats(a);

	printf("Adding 20 elements\n");
	int i;
	for (i = 0; i < 20; i++) {
		array_append(a, i);
		array_print_stats(a);
	}

	printf("Deleting 20 elements\n");
	for (i = 0; i < 20; i++) {
		array_delete_last(a);
		array_print_stats(a);
	}

	//Remember to free any allocated memory once it is no longer needed.
	array_free(a);

	return 0;
}
