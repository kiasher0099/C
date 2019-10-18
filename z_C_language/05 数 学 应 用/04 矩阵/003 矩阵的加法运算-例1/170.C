#include <stdio.h>
main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("please input matrix a:\n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);						/*从键盘中输入3*3的矩阵存入数组a中*/
    printf("please input matrix b:\n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &b[i][j]);						/*从键盘中输入3*3的矩阵存入数组b中*/
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            c[i][j] = a[i][j] + b[i][j];						/*矩阵a和矩阵b中对应元素进行相加，和放入c中*/
    printf("the sum is:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("%3d", c[i][j]);						/*输出矩阵c*/
        printf("\n");									/*每输出一行进行换行*/
    }
}
