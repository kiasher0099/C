#include <stdio.h>
#include <math.h>
main()
{
    float n;												/*定义n为单精度型*/
    printf("please input:\n");										/*双引号内普通字符原样输出并回车*/
    scanf("%f", &n);											/*从键盘中输入一个单精度数并赋给n*/
    printf("the sin of %f is %f\n", n, sin(n));							/*调用sin函数输出正弦值*/
    printf("the cos of %f is %f\n", n, cos(n));							/*调用cos函数输出余弦值*/
    printf("the tan of %f is %f\n", n, tan(n));							/*调用tan函数输出正弦值*/
} 
