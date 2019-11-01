#include <stdio.h>

void insertion_sort(int arr[], int len)
{
	int i, j, temp;
	for (i = 1; i < len; i++)
	{
		temp = arr[i];
		for (j = i; j > 0 && arr[j-1] > temp; j--) 
			arr[j] = arr[j-1];
		arr[j] = temp;
	}
}

int main()
{
	int i;
	int arr[] = {10, 3, 53, 21, 55, 3, 11, 9, 0, 12, 11};
	int len = (int)sizeof(arr) / sizeof(*arr);

	insertion_sort(arr, len);

	for (i = 0; i < len; i++)
		printf("arr[%d] = %d\t", i, arr[i]);
	printf("\n");

	return 0;
}			
