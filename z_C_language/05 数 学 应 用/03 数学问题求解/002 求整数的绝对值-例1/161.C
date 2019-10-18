#include <stdio.h>
#include <math.h>
main()
{
    int i;												/*定义变量i为基本整型*/
    printf("please input a number:\n");							/*双引号内普通字符原样输出并回车*/
    scanf("%d", &i);										/*从键盘中输入数值并赋值给i*/
    printf("number: %d ,absolute value: %d ", i, abs(i));			/*调用abs函数求出绝对值*/
} 
