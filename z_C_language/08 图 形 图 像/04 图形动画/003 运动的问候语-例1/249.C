#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#define step 10
main()
{
    int gdriver = DETECT, gmode;
    static int startx = 5;
    static int starty = 100;
    int n;
    int size;
    initgraph(&gdriver, &gmode, "");								/*图形方式初始化*/
    setbkcolor(BLUE);										/*设置屏幕背景颜色为蓝色*/
    while (!kbhit())
    {
        for (n = 1; n <= 40; n++)
        {
            cleardevice();										/*清屏*/
            setcolor(GREEN);									/*设置	绘图颜色为绿色*/
            setlinestyle(0, 0, 3);									/*设置线形*/
            setfillstyle(1, YELLOW);								/*设置填充形式*/
            rectangle(startx + n * step, starty, startx + n * step + 160,
                starty + 80);									/*画矩形*/
            floodfill(startx + n * step + 10, starty + 20, GREEN);			/*对指定区域进行填充*/
            settextstyle(1, 0, 3);									/*设置输出文本的形式*/
            outtextxy(startx + 20+n * step, starty + 20, "welcome!!");		/*在指定位置输出字符串*/
            delay(1e10);										/*设置延迟时间*/
        }
    }
    closegraph();											/*退出图形状态*/
}
