#include <graphics.h>
#include <math.h>
#include <conio.h>
#define pi 3.1415926
void squ()													 /*自定义函数squ来实现用正方形绘图*/
{
    int i, j, x[6], y[6];
    float m, n;
    setcolor(14);												 /*设置绘图颜色*/
    for (m = 0; m <= pi / 2; m += pi / 8)
    {
        for (i = 1, n = m; n <= 5 *pi / 2+m; i++, n += pi / 2)				 /*确定正方形的顶点坐标存到数组中*/
        {
            x[i] = 320+200 * sin(n);
            y[i] = 240-200 * cos(n);
        }
        for (i = 1; i <= 4; i++)
            line(x[i], y[i], x[i + 1], y[i + 1]);							 /*将各个顶点连起来组成正方形*/
    }
}

void multicolor()												 /*自定义函数multicolor来画彩色竖线*/
{
    int i, j, color = 1;
    float n, x, y;
    for (n = pi / 2; n <= 3 *pi / 2; n += pi / 60)
    {
        setcolor(color);
        x = 320+140 * sin(n);
        y = 240-140 * cos(n);										 /*确定竖线一端的位置*/
        line(x, y, x, 480-y);											 /*画竖线*/
        delay(1e20);
        color++;
        if (color > 15)
            color = 1;
    }
}

main()
{
    int gdriver, gmode;
    gdriver = DETECT;
    initgraph(&gdriver, &gmode, "");								 /*图形方式初始化*/
    squ();														 /*调用squ函数*/
    delay(1e10);
    multicolor();													 /*调用multicolor函数*/
    getch();
    closegraph();
}
