#include <stdio.h>
#include <stdlib.h>
int judge(long n) /*判断一个数是否是回文数*/
{
    int i, len, half; /*定义变量为基本整型*/
    char a[20]; /*定义数组a为字符型*/
    ltoa(n, a, 10); /*把长整形数n转换成字符串存到数组a中*/
    len = strlen(a); /*获取数组a的长度*/
    half = len / 2;
    for (i = 0; i < half; i++)
        if (a[i] != a[--len])
     /*判断相对应位置的字符是否相同*/
            break;
     /*如果不想同跳出循环*/
    if (i >= half)
        return 1;
     /*是回文数返回1*/
    else
        return 0;
     /*不是回文数返回0*/
}
main()
{
    long n;
    clrscr();
    printf("the result is:\n");
    for (n = 11; n < 1000; n++)
     /*对10~1000之间的数进行判断*/
        if (judge(n) && judge(n *n) && judge(n *n * n))
     /*判断是否是三重回文数*/
            printf(" n=%4ld,n*n=%6ld,n*n*n=%8ld \n", n, n *n, n *n * n);
     /*将三重回文数输出*/
    getch();
}
