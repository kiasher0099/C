#include <stdio.h>
void binary_search(int key, int a[], int n) /*自定义函数binary_search*/
{
    int low, high, mid, count = 0, count1 = 0;
    low = 0;
    high = n - 1;
    while (low < high)								/*当查找范围不为0时执行循环体语句*/
    {
        count++;								/*count记录查找次数*/
        mid = (low + high) / 2;						/*求出中间位置*/
        if (key < a[mid])							/*当key小于中间值*/
            high = mid - 1;						/*确定左子表范围*/
        else if (key > a[mid])						/*当key大于中间值*/
            low = mid + 1;							/*确定右子表范围*/
        else if (key == a[mid])						/*当key等于中间值证明查找成功*/
        {
            printf("success!\nsearch %d times!a[%d]=%d", count, mid, key);
											/*输出查找次数及所查找元素在数组中的位置*/
            count1++;							/*count1记录查找成功次数*/
            break;
        }
    }
    if (count1 == 0)								/*判断是否查找失败*/
        printf("no found!");							/*查找失败输出no found*/
}
main()
{
    int i, key, a[100], n;
    printf("please input the length of array:\n");
    scanf("%d", &n);								/*输入数组元素个数*/
    printf("please input the element:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);							/*输入有序数列到数组a中*/
    printf("please input the number which do you want to search:\n");
    scanf("%d", &key);							/*输入要查找的关键字*/
    binary_search(key, a, n);						/*调用自定义函数*/
}
