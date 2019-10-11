#include<stdio.h>
main()
{
    int i = 1, n; 							/*定义变量i，j为基本整型并给i赋初值1*/
    double sum = 0; 						/*定义变量s为双精度型并赋初值0*/
    printf("input n:\n");
    scanf("%d", &n);						/*scanf函数获取n的值*/
    while (i <= n)						/*当i小于等于n时，s逐次累加求和*/
    {
        sum = sum + 1.0 / (double)i;
        i++;
    }
    printf("n=%d,sum=%lf\n", n, sum); 		/*将n与sum的值打印输出*/
} 
