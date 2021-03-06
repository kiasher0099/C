#include<stdio.h>
main()
{
    int i, j, a[11][11]; 									/*定义i，j，a[11][11]为基本整型*/
    for (i = 1; i < 11; i++)								/*for循环i的范围从1到10*/
    {
        a[i][i] = 1; 									/*对角线元素全为1*/
        a[i][1] = 1; 									/*每行第一列元素全为1*/
    }
    for (i = 3; i < 11; i++)								/*for循环范围从第3行开始到第10行*/
        for (j = 2; j <= i - 1; j++)							/*for循环范围从第2列开始到该行行数减一列为止*/
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];				/*第i行j列等于第i-1行j-1列的值加上第i-1行j列的值*/
    for (i = 1; i < 11; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%4d", a[i][j]);						/*通过上面两次for循环将二维数组a中元素输出*/
        printf("\n"); 									/*每输出完一行进行一次换行*/
    }
}
