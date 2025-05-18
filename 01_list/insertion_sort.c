
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
		int el = arr[i];
		for (j = i; j > 0; j--) {
			//Should we insert here
			if (arr[j - 1] <= el)
				break;
			//Shift element forward by 1
			arr[j] = arr[j - 1];
		}
		//Insert element here
		arr[j] = el;

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
