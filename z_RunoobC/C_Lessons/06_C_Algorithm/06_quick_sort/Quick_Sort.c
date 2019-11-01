#include <stdio.h>

typedef struct _Range {
	int start, end;
}Range;

Range new_Range(int s, int e)
{
	Range r;
	r.start = s;
	r.end = e;
	return r;
}

void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

void quick_sort(int arr[], const int len)
{
	if (len <= 0)
		return;			//避免len小于0时引发错误
	Range r[len];
	int p = 0;
 	r[p++] = new_Range(0, len - 1);
	while (p)
	{
		Range range = r[--p];
	if (range.start >= range.end)
		continue;
	int mid = arr[(range.start + range.end) / 2];
	int left = range.start, right = range.end;
	do
	{
		while (arr[left] < mid) ++left;
      	while (arr[right] > mid) --right;

		if (left <= right)
		{
			swap(&arr[left], &arr[right]);
			left++; right--;
		}
	}while (left <= right);

	if (range.start < right) r[p++] = new_Range(range.start, right);
	if (range.end > left) r[p++] = new_Range(left, range.end);
	}
}

int main()
{
	int i;
	int arr[] = {2, 3, 1, 5, 12, 4, 10, 8, 7};
	int len = (int)sizeof(arr) / sizeof(*arr);

	quick_sort(arr,len);

	for (i = 0; i < len; i++)
		printf("arr[%d] = %d\t", i, arr[i]);
	printf("\n");

	return 0;
}
	
