#include <stdio.h>
main()
{
    int a[2][3], b[3][2], c[2][2], i, j, i1, sum,k;
    printf("please input martrix a:\n");
    for (i = 0; i <= 1; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);							/*输入2*3矩阵到数组a中*/
    printf("please input martrix b;\n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 1; j++)
            scanf("%d", &b[i][j]);							/*输入3*2矩阵到数组b中*/
    for (i = 0; i <= 1; i++)									/*a矩阵的行数*/
        for (k = 0; k <= 1; k++)								/*b矩阵的列数*/
    {
        sum = 0;
        for (j = 0; j <= 2; j++)
                sum += a[i][j] *b[j][k];
        c[i][k] = sum;										/*每次求得的和放入指定的行列中*/
    }
    printf("the product is:\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
            printf("%4d", c[i][j]);							/*将矩阵c输出*/
        printf("\n");										/*每输出一行进行换行*/
    }
}
