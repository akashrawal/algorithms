
#include <stdio.h>

void print_arr(int* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d   ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = { 7, 5, 3, 29, 23, 2, 19, 17, 13, 11 };
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("Input:\n");
	print_arr(arr, len);

	int i, j;
	for (i = 0; i < len; i++) {
		//Find the smallest element
		int min = i;
		for (j = i + 1; j < len; j++) {
			if (arr[j] < arr[min])
				min = j;
		}
		/*
		 * Swap the minimum element with first element. 
		 * This does two things
		 * 1. Fast delete the smallest element from input section, 
		 *    giving space for the output array to grow.
		 * 2. Appends it to output section
		 */
		if (min != i) {
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}

		printf("Iteration %d\n", i);
		for (j = 0; j < (i + 1); j++) {
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
