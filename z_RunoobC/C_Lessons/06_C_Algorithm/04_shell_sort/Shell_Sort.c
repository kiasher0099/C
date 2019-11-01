#include <stdio.h>

void shell_sort(int arr[], int len)
{
	int gap, i, j;
	int temp;
	for (gap = len >> 1; gap > 0; gap = gap >> 1)
		for (i = gap; i < len; i++)
		{
			temp = arr[i];
			for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
				arr[j + gap] = arr[j];
			arr[j + gap] = temp;
		}
}

int main()
{
	int i;
	int arr[] = {2, 31, 21, 41, 12, 42, 1, 33, 23};
	int len = (int)sizeof(arr) / sizeof(*arr);

	shell_sort(arr,len);

	for (i = 0; i < len; i++)
		printf("arr[%d] = %d\t", i, arr[i]);
	printf("\n");

	return 0;
}
