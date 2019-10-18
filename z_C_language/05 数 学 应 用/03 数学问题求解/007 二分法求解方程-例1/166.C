#include <math.h>
#include <stdio.h>
main()
{
    float x0, x1, x2, f0, f1, f2; 									/*定义变量为浮点型*/
    do
    {
        printf("enter x1,x2:");
        scanf("%f,%f", &x1, &x2); 								/*从键盘中输入范围*/
        f1 = sin(x1);
        f2 = sin(x2);
    }
    while (f1 *f2 > 0); 										/*判断是否有根，若无根重新输入范围*/
    do
    {
        x0 = (x1 + x2) / 2; 										/*取中间值*/
        f0 = sin(x0); 											/*求f0*/
        if ((f0 *f1) < 0)										/*判断根在那个范围内*/
        {
            x2 = x0; 										/*范围在（x1，x0）*/
            f2 = f0;
        }
        else
        {
            x1 = x0; 										/*范围在（x0，x1）*/
            f1 = f0;
        }
    }
    while (fabs(f0) >= 1e-5); 									/*判断是否大于精度*/
    printf("x=%6.2f\n", x0);										/*将最终结果输出*/
}
