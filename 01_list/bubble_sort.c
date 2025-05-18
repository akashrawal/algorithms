
#include <stdio.h>

void print_arr(int* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d   ", arr[i]);
	}
	printf("\n");
}

void compare_and_swap(int* a, int* b) {
	if (*a > *b) {
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

int main() {
	int arr[] = { 7, 5, 3, 29, 23, 2, 19, 17, 13, 11 };
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("Input:\n");
	print_arr(arr, len);

	int i, j;
	for (i = 0; i < len; i++) {
		for (j = 0; j < (len - (i + 1)); j++) {
			compare_and_swap(arr + j, arr + j + 1);
		}

		printf("Iteration %d\n", i);
		for (j = 0; j < len - (i + 1); j++) {
			printf("%d  ", arr[j]);
		}
		printf("|  ");
		for (; j < len; j++) {
			printf("%d  ", arr[j]);
		}
		printf("\n");
	}

	return 0;
}
