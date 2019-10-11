 #include <stdio.h>
right(unsigned value, int n)									/*自定义循环右移函数*/
{
    unsigned z;
    z = (value >> n) | (value << (16-n));							/*循环右移的实现过程*/
    return (z);
}
left(unsigned value, int n)									/*自定义左移函数*/
{
    unsigned z;
    z = (value >> (16-n)) | (value << n);							/*循环左移的实现过程*/
    return z;
} 
main()
{
    unsigned a;
    int n;
    printf("please input a number:\n");
    scanf("%o", &a);										/*输入一个八进制数*/
    printf("please input the number of displacement:\n");
    scanf("%d", &n);										/*输入要移位的位数*/
    if (n > 0)
    {
        right(a, n);										/*调用自定义的右移函数*/
        printf("the result is:%o\n", right(a, n));					/*将右移后的结果输出*/
    }
    else
    {
        n =  - n;										/*将n转为正值*/
        left(a, n);										/*调用自定义的左移函数*/
        printf("the result is %o:\n", left(a, n));					/*将左移后的结果输出*/
    }
}
