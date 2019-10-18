#include<stdio.h>
main()
{
    int i, j, k; 							/*定义变量i,j,k为基本整型*/
    for (i = 1; i <= 5; i++)					/*控制行数*/
    {
        for (j = 1; j <= 5-i; j++)				/*控制空格数*/
            printf(" ");
        for (k = 1; k <= 2 *i - 1; k++)			/*控制打印#号的数量*/
            printf("#");
        printf("\n");
    }
}
