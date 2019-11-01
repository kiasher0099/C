#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int arr[], int len)
{
	int i, j;
	
	for (i = 0; i < len; i++)
	{
		int min = i;
		for (j = i + 1; j < len; j++)
			if (arr[j] < arr[min])
				min = j;
		swap(&arr[min], &arr[i]);
	}
}

int main()
{
	int i;
	int arr[] = {12, 32, 2, 41, 1, 42, 14, 21, 33, 6};
	int	len = (int)sizeof(arr) / sizeof(*arr);
	
	selection_sort(arr, len);
	for (i = 0; i < len; i++)
		printf("arr[%d] = %d\t", i, arr[i]);
	printf("\n");
	return 0;
}
