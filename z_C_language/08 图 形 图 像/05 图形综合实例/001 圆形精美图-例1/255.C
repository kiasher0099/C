#include <graphics.h>
#include <math.h>
#define pi 3.1415926
void draw(int x, int y, int r)								 /*自定义函数用来绘图*/
{
    int x1, y1, x2, y2, x3, y3, color = 1;
    float i;
    for (i = 0; i <= 2 *pi; i += pi / 20)
    {
        setcolor(color);
        x1 = x + r * cos(i);
        y1 = y - r * sin(i);
        x2 = x - 3 * r + r * cos( - i);
        y2 = y - 3 * r - r * sin( - i);
        x3 = x + 3 * r + r * cos( - i);
        y3 = y + 3 * r - r * sin( - i);
        circle(x1, y1, r);							 /*沿逆时针方向画圆*/
        circle(x2, y2, r);							 /*沿顺时针方向画圆*/
        circle(x3, y3, r);							 /*沿顺时针方向画圆*/
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
    initgraph(&gdriver, &gmode, "");					 /*图形方式初始化*/
    cleardevice();
    draw(320, 240, 25);							 /*调用前面自定义的函数*/
    getch();
    closegraph();								 /*退出图形状态*/
}
