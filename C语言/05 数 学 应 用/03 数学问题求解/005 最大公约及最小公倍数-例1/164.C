#include <stdio.h>
main()
{
    int a, b, c, m, t;											/*定义变量为基本整型*/
    printf("please input two numbers;\n");
    scanf("%d%d", &a, &b); 									/*从键盘中输入两个数*/
    if (a < b)												/*当a小于b时实现俩值互换*/
    {
        t = a;
        a = b;
        b = t;
    }
    m = a * b; 												/*求出a与b的乘积*/
    c = a % b; 												/*a对b取余赋给c*/
    while (c != 0) 											/*当c不为0时执行循环体语句*/
    {
        a = b;												/*将b赋给a*/
        b = c;													/*将c的值赋给b*/
        c = a % b;												/*继续取余并赋给c*/
    }
    printf("the max commen divisor:\n%d\n", b); 							/*输出最大公约数*/
    printf("the min commen multiple:\n%d", m / b);							/*输出最小公倍数*/
}
