#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926
#define R1 150
void Pentacle(double m)									 /*自定义函数Pentacle用来画五角星*/
{
    int x1, y1, x2, y2;
    double n;
    setcolor(RED);
    for (n = m; n <= 2 *PI + m; n += 2 * PI / 5)
    {
        x1 = 320+R1 * cos(n);
        y1 = 240-R1 * sin(n);
        x2 = 320+R1 * 0.382 * cos(n + PI / 5);					 /*0.382黄金分割点*/
        y2 = 240-R1 * 0.382 * sin(n + PI / 5);
        line(x1, y1, x2, y2);									 /*将外圈确定的点与内圈确定的点相连接*/
        x1 = 320+R1 * cos(n + 2 * PI / 5);
        y1 = 240-R1 * sin(n + 2 * PI / 5);
        line(x2, y2, x1, y1);									 /*将内圈确定的点与外圈确定的点相连接*/
    }
    setfillstyle(1, RED);									 /*设置填充形式为红色实填充*/
    floodfill(320, 240, RED);								 /*对五角星内进行填充*/
}

void light()												 /*自定义函数light用来画发光部分*/
{
    int i, j, x, y, r2 = 160;
    setcolor(YELLOW);
    for (i = 0; i <= 16; i++)
    {
        for (j = 0; j <= 60; j++)
            ellipse(320, 240, j *6, j *6+1, r2 + 10 * i, r2 + 5 * i);
    }
}

void Delay(int Second)									 /*自定义时间延迟函数Delay*/
{
    long T1, T2;
    T1 = time();
    while (1)
    {
        delay(50);
        T2 = time();
        if (T2 - T1 > Second)
            break;
    }
}

main()
{
    int gdriver = DETECT, gmode;
    double m = 0.0;
    initgraph(&gdriver, &gmode, "");						 /*函数图形初始化*/
    while (!kbhit())
    {
        Pentacle(m);									 /*调用函数Pentacle*/
        light();										 /*调用函数light*/
        Delay(0.5);									 /*调用函数Delay*/
        cleardevice();									 /*清屏*/
        m += PI / 6;									 /*函数参数每次增加30°实现五角在不同位置重画*/
    }
    getch();
    closegraph();								 /*退出图形状态*/
}
