#include <stdio.h>
void search(int key, int a[], int n)							/*自定义函数search*/
{
    int i, count = 0, count1 = 0;
    for (i = 0; i < n; i++)
    {
        count++;									/*count记录查找次数*/
        if (a[i] == key)								/*判断要查找的关键字与数组中的元素是否相等*/
        {
            printf("search %d times a[%d]=%d\n", count, i, key);	/*输出查找次数及在数组中的位置*/
            count1++;								/*count1记录查找成功次数*/
        }
    }
    if (count1 == 0)									/*判断是否查找到h*/
        printf("no found!");								/*如果未查找到输出no found*/
}
main()
{
    int n, key, a[100], i;
    printf("please input the length of array:\n");
    scanf("%d", &n);									/*输入要输入的元素个数*/
    printf("please input element:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);								/*输入元素存到数组a中*/
    printf("please input the number which do you want to search:\n");
    scanf("%d", &key);								/*指定要查找的元素*/
    search(key, a, n);									/*调用自定义的search函数*/
}
