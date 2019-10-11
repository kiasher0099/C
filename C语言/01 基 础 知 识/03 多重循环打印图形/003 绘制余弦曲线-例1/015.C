#include<stdio.h>
#include<math.h>
main()
{
    double y;
    int x, m;
    for (y = 1; y >=  - 1; y -= 0.1)						/*0到π，π到2π分别绘制21个点*/
    {
        m = acos(y) *10; 							/*求出对应的横坐标位置*/
        for (x = 1; x < m; x++)
            printf(" ");							/*画*前画空格数*/
        printf("*"); 								/*画**/
        for (; x < 62-m; x++)						/*画出对称面的**/
            printf(" ");
        printf("*\n");
    }
    getch();
}
