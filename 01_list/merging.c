
#include <stdio.h>

void print_arr(int* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d   ", arr[i]);
	}
	printf("\n");
}


int main() {
	int arr1[] = {1, 3, 5, 7, 9};
	int arr1_len = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[] = {2, 4, 6, 8, 10};
	int arr2_len = sizeof(arr2) / sizeof(arr2[0]);

	printf("arr1: \n");
	print_arr(arr1, arr1_len);

	printf("arr2: \n");
	print_arr(arr2, arr2_len);

	int res_len = 10;
	int res[res_len];
	int i, j, k;
	for (i = 0, j = 0, k = 0;
			i < arr1_len && j < arr2_len;
			k++) {

		if (arr1[i] < arr2[j]) {
			res[k] = arr1[i++];
		} else {
			res[k] = arr2[j++];
		}
	}

	while(i < arr1_len)
		res[k++] = arr1[i++];
	while(j < arr2_len)
		res[k++] = arr2[j++];

	printf("res: \n");
	print_arr(res, res_len);
}
