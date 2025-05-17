
#include <stdio.h>

void print_arr(int* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d   ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("Haystack:\n");
	print_arr(arr, len);

	int needle = 8;
	printf("Needle: %d\n", needle);

	int l = 0;
	int r = len;
	printf("Beginning binary search, l = %d, r = %d\n", l, r);

	while (l < r) {
		int c = (l + r) / 2;

		printf("Iteration, l = %d, r = %d, c = %d\n", l, r, c);

		if (needle < arr[c])
			r = c;
		else if (needle > arr[c])
			l = c + 1;
		else {
			printf("Found at %d\n", c);
			break;
		}
	}
	printf("Not found, l = %d, r = %d\n", l, r);

	return 0;
}
