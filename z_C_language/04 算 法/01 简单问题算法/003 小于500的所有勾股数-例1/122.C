#include<stdio.h>
main()
{
    long i, j, k, n = 0;
    for (i = 1; i < 360; i++)
     /*i在1到360之间进行穷举*/
        for (j = i; j < 500; j++)
            for (k = j + 1; k <= 500; k++)
                if (i *i + j * j == k *k)
     /*判断这三个数是否是勾股数*/
    {
        printf("%3ld^2+%3ld^2=%3ld^2  ", i, j, k); /*将勾股数按指定格式输出*/
        n++;
        if (n % 4 == 0)
         /*没输出4个进行换行*/
                        printf("\n");
    }
}
