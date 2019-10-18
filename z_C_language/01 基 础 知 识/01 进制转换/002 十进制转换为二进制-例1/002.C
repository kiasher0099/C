#include <stdio.h>
main()
{
    int i, j, n, m;										 /*定义变量i,j,n,m*/
    int a[16] =
    {
        0
    };											 /*定义数组a,元素初始值为0*/
    //clrscr();										 /*清屏*/
    printf("please input the decimalism number(0~32767):\n");	 /*输出双引号内普通字符*/
    scanf("%d", &n);									 /*输入n的值*/
    for (m = 0; m < 15; m++)							 /*for循环从0到14，最高为符号位，本题始终为0*/
    {
        i = n % 2;									 /*取2的余数*/
        j = n / 2;								 	 /*取被2整除的结果*/
        n = j;										 /*将余数每次的余数存入数组a中*/
        a[m] = i;
    }
    for (m = 15; m >= 0; m--)
    {
        printf("%d", a[m]);								 /*for循环，将数组中的16个元素从后往前输出*/
        if (m % 4 == 0)
            printf(" ");								 /*每输出4个元素，输出一个空格*/
    }
}
