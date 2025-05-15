
#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5};

	printf("Space used by array: %zu\n", 
			sizeof(arr));

	printf("Array length (number of elements): %zu\n",
			sizeof(arr) / sizeof(arr[0]));

	printf("Array elements: \n");
	int i;
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}




