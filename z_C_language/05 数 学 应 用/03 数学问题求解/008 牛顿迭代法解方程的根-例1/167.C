#include <stdio.h>
#include <math.h>
float Newton(float a, float b, float c, float d)						/*自定义函数Newton，实现迭代法解方程*/
{
    float x = 1, x0, f, f1;									/*定义变量类型为单精度型*/
    do
    {
        x0 = x;
        f = ((a *x0 + b) *x0 + c) *x0 + d; 						/*求f(x0)*/
        f1 = (3 *a * x0 + 2 * b) *x0 + c; 						/*求f(x0)的导数*/
        x = x0 - f / f1; 									/*套用牛顿迭代公式*/
    }
    while (fabs(x - x0) >= 1e-5); 								/*迭代到指定精度*/
    return (x);											/*返回x的值*/
}
main()
{
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d); 						/*从键盘中输入系数*/
    printf("%.2fx^3+%.2fx^2+%.2fx+%.2f=0\n", a, b, c, d); 			/*输出方程*/
    printf("x=%.5f\n", Newton(a, b, c, d)); 						/*输出根*/
}
