
#include <stdio.h>

void print_arr(int* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d   ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[5] = {0, 1, 2, 3, 4};
	int len = 5;

	printf("Before insertion:\n");
	print_arr(arr, len);


	int x = 2;
	printf("Delete index %d:\n", x);
	int i;
	for (i = x; i < (len - 1); i++) {
		arr[i] = arr[i + 1];
	}
	len = len - 1;

	print_arr(arr, len);

	return 0;
}
