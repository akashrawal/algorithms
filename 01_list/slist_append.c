
#include <stdio.h>
#include <stdlib.h>

typedef struct _List List;
struct _List {
	int data;
	List* next;
};

void print_list(List* list) {
	List* iter;
	if (!list) {
		printf("  (nil)\n");
	}
	for (iter = list; iter; iter = iter->next) {
		printf("  %p: { data: %d, next: %p }\n", 
				iter, iter->data, iter->next);
	}
}

void free_list(List* list) {
	List* iter, *next;
	for (iter = list; iter; iter = next) {
		next = iter->next;
		free(iter);
	}
}

int main() {
	List* list = NULL;	

	printf("Initial list:\n");
	print_list(list);

	int i;
	for (i = 1; i <= 5; i++) {
		List* el = malloc(sizeof(List));
		el->data = i;
		el->next = NULL;

		if (list) {
			//Find the last element
			List* iter, *last;
			for (iter = list; iter; iter = iter->next) {
				last = iter;
			}
			last->next = el;
		} else {
			list = el;
		}

		printf("After appending %d:\n", i);
		print_list(list);
	}

	free_list(list);

	return 0;
}

