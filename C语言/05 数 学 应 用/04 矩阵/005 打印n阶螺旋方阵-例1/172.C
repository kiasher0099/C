#include <stdio.h>
main()
{
    int i, j, k = 0, a[10][10], m, n;
    printf("please input n:\n");
    scanf("%d", &n);
    if (n % 2 == 0)										/*判断是否为偶数*/
        m = n / 2;
    else
        m = n / 2+1;
    for (i = 0; i < m; i++)
    {
        for (j = i; j < n - i; j++)
        {
            k++;
            a[i][j] = k;									/*将每圈中上面的行中的数据存入数组中*/
        }
        for (j = i + 1; j < n - i; j++)
        {
            k++;
            a[j][n - i - 1] = k; 								/*将每圈中右面的列中的数据存入数组中*/
        }
        for (j = n - i - 2; j >= i; j--)
        {
            k++;
            a[n - i - 1][j] = k;								/*将每圈中下面行中的数据存入数组中*/
        }
        for (j = n - i - 2; j >= i + 1; j--)
        {
            k++;
            a[j][i] = k;									/*将每圈中左面的列中的数据存入数组中*/
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%5d", a[i][j]);							/*将螺旋矩阵输出*/
        printf("\n");										/*每输出一行进行换行操作*/
    }
}
