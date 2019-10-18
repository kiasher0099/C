#include <math.h>
#include <graphics.h>
main()
{
    int x0 = 320, y0 = 240;
    int n = 25, i, j, r = 180;
    int x[50], y[50];
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");								/*图形方式初始化*/
    cleardevice();											/*清屏*/
    setbkcolor(WHITE);										/*设置背景颜色为白色*/
    setcolor(GREEN);											/*设置绘图颜色为绿色*/
    for (i = 0; i < n; i++)
    {
        x[i] = r * cos(2 *3.1415926 * i / n) + x0;						/*确定横坐标*/
        y[i] = r * sin(2 *3.1415926 * i / n) + y0;						/*确定纵坐标*/
    }
    for (i = 0; i <= n - 2; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
            line(x[i], y[i], x[j], y[j]);								/*将上面确定的各点之间进行连线*/
    }
    getch();
    closegraph();											/*退出图形界面*/
}
