#include <stdio.h>
main()
{
    int i, j, sum = 0;								/*定义变量为基本整型*/
    for (i = 1; i < 1000; i++)							/*对1000以内的数进行穷举*/
    {
        sum = 0;
        for (j = 1; j < i; j++)
            if (i % j == 0) 						/*判断j是否是i的因子*/
                sum += j; 						/*因子相加求和*/
        if (sum == i) 							/*判断该数是否等于各因子之和*/
            printf("%4d", i);
    }
}
