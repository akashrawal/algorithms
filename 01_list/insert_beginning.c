
#include <stdio.h>

void print_arr(int* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d   ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[5] = {0, 1, 2, 3};
	int len = 4;

	printf("Before insertion:\n");
	print_arr(arr, len);


	printf("Insert at beginning:\n");
	len = len + 1;
	int i;
	for (i = len - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = 4;

	print_arr(arr, len);

	return 0;
}
