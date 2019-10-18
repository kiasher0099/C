#include<stdio.h>
main()
{
    int i, x, y, z = 1;
    printf("please input two numbers x and y(x^y):\n");
    scanf("%d%d", &x, &y); /*输入底数和幂数*/
    for (i = 1; i <= y; i++)
        z = z * x % 1000;/*计算一个数任意次方的后三位*/
    printf("the last 3 digits of %d^%d is:%d\n", x, y, z); /*输出最终结果*/
}
