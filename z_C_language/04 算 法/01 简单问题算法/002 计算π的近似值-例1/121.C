#include <stdio.h>
#include<math.h>
double fun(double eps) /*自定义函数fun，用来求多项式的和*/
{
    float n, t, pi, s;
    t = 1;
    pi = 0;
    n = 1.0;
    s = 1.0;
    while ((fabs(s)) >= eps)						/*当s的绝对值小于输入的精度，执行循环体语句*/
    {
        pi = pi + s; 							/*累加求和*/
        t = n / (2 *n + 1);
        s *= t;
        n++;
    }
    pi = pi * 2;
    return pi; 								/*将π的近似值返回*/
}
main()
{
    float n, result;
    printf("please input precision:\n");
    scanf("%f", &n); 												/*输入精度*/
    result = fun(n); 												/*调用函数fun*/
    printf("the approximation of pi is %f", result); 							/*将π的近似值输出*/
}
