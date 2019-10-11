#include<stdio.h>
main()
{
    int n, k = 1, s = 0, m, c =  - 1;
    printf("the result is:\n");
    for (n = 11; n < 100; n++)
    {
        k = 1; 										/*存储各位数之积*/
        s = 0; 										/*存储各位数之和*/
        m = n;
        while (m)
        {
            k *= m % 10; 								/*分离出各位求积*/
            s += m % 10; 								/*分离出各位求和*/
            m /= 10;
        }
        if (k > s)									/*判断积是否大于和*/
        {
            c++; 									/*统计个数*/
            if (c % 5 == 0)								/*5个一换行*/
                printf("\n");
            printf("%5d", n);
        }
    }
}
