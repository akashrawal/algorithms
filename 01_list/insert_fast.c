
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

	int x = 2;
	printf("Insert at %d:\n", x);
	len = len + 1;
	arr[len - 1] = arr[x];
	arr[x] = 4;

	print_arr(arr, len);

	return 0;
}
