#include <stdio.h>
main()
{
    int a[4][4], i, j, sum = 0;
    printf("please input numbers:\n");
    for (i = 1; i <= 3; i++)
        for (j = 1; j <= 3; j++)
            scanf("%d", &a[i][j]);						/*从键盘中输入9个数到二维数组a*/
    printf("\nThis 3*3 matrix is:\n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
            printf("%4d", a[i][j]);						/*将3*3矩阵输出*/
        printf("\n");									/*每输出一行进行换行*/
    }
    for (i = 1; i <= 3; i++)
        for (j = 1; j <= 3; j++)
            if (i == j)								/*如果函数等于列数，这说明是主对角线上的元素*/
                sum += a[i][j];							/*对主对角线上的元素累加求和*/
    printf("diagonal's sum is %d", sum);						/*将最终结果输出*/
}
