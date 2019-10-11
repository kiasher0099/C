#include <graphics.h>
#include <math.h>
#include <conio.h>
#define PI 3.1415926
void main()
{
    int x, y, r = 70, r1;										/*定义x，y，r，r1为基本整型并为r赋初值70*/
    double a;											/*定义a为双精度型*/
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");							/*图形方式初始化*/
    cleardevice();										/*清屏*/
    setbkcolor(WHITE);									/*设置背景颜色为白色*/
    setcolor(RED);										/*设置绘图颜色为红色*/
    for (a = 0; a < 2 *PI; a += PI / 30)
    {
        x = 320+r * cos(a);
        y = 240-r * sin(a);
        r1 = sqrt((x - 320)*(x - 320) + (y - 240+r)*(y - 240+r));
        circle(x, y, r1);									/*利用上面公式画圆形*/
    }
    getch();
    closegraph();										/*退出图形方式*/
}
