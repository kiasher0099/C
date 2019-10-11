#include <stdio.h>
int difference(int a[])								/*自定义difference函数实现求最大数与最小数的差*/
{
    int t, i, j, sum, sum1, sum2;
    for (i = 0; i < 3; i++)							/*利用选择排序法对数组a中的数据由大到小排序*/
        for (j = i + 1; j < 4; j++)
    if (a[i] < a[j])
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    sum1 = a[0] *1000+a[1] *100+a[2] *10+a[3];			/*将数组中的四个数组成最大四位数*/
    sum2 = a[3] *1000+a[2] *100+a[1] *10+a[0];			/*将数组中的四个数组成最小n位数，n小于等于4*/
    sum = sum1 - sum2;							/*求最大数与最小数的差*/
    printf("%5d=%5d-%5d\n", sum, sum1, sum2); 			/*讲求的的结果按指定格式输出*/
    return sum;									/*将差值返回*/
}
main()
{
    int i, j, k, l, n, a[4];
    printf("please input a number:\n");
    scanf("%d", &n);								/*从键盘中输入一个四位数*/
    while (n != 6174)
    {
        a[0] = n / 1000;							/*分离出千位上的数*/
        a[1] = n / 100 % 10;						/*分离出百位上的数*/
        a[2] = n / 10 % 10;							/*分离出十位上的数*/
        a[3] = n % 10;							/*分离出个位上的数*/
        n = difference(a);							/*调用difference函数，将返回值赋给n*/
    }
}
