#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#define START_X  100
#define START_Y  400
void draw(int x, int y)									/*自定义函数draw画出火箭外形*/
{
    setcolor(14);
    setfillstyle(1, 15);
    rectangle(x, y, x + 30, y + 60);
    floodfill(x + 10, y + 10, 14);
    setfillstyle(1, RED);
    line(x + 15, y - 15, x, y);
    line(x + 15, y - 15, x + 30, y);
    floodfill(x + 15, y - 5, 14);
    setfillstyle(2, RED);
    line(x - 20, y + 80, x, y + 60);
    line(x + 50, y + 80, x + 30, y + 60);
    line(x - 20, y + 80, x + 50, y + 80);
    floodfill(x + 10, y + 70, 14);
    line(x, y + 90, x - 10, y + 100);
    setcolor(RED);
    line(x + 10, y + 90, x, y + 100);
    line(x + 20, y + 90, x + 30, y + 100);
    setcolor(14);
    line(x + 30, y + 90, x + 40, y + 100);
}

void play()									/*自定义火箭发射函数*/
{
    int x, y;
    int s = 4;
    for (x = START_X, y = START_Y; y >= 15; y -= s)
    {
        cleardevice();							/*清屏*/
        draw(x, y);							/*画火箭*/
        delay(1e20);							/*延迟时间*/
    }
    outtextxy(200, 100, "The demo is over !");			/*在屏幕指定位置输出字符串*/
}

main()
{
    char ch;
    int x = START_X, y = START_Y;
    int gdriver = DETECT;
    int gmode;
    initgraph(&gdriver, &gmode, "");				/*图形方式初始化*/
    setbkcolor(BLACK);						/*设置背景颜色为黑色*/
    cleardevice();							/*清屏*/
    setcolor(WHITE);							/*设置绘图颜色为白色*/
    settextstyle(TRIPLEX_FONT, 0, 2);				/*设置输出的文本形式*/
    outtextxy(200, 100, "Press any key to begin!");		/*在指定位置输出字符串*/
    draw(x, y);								/*调用画火箭函数*/
    getch();
    play();									/*调用自定义的play（）函数*/
    getch();
    closegraph();							/*退出图形状态*/
}
