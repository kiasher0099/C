#include <graphics.h>
main()
{
    int i, j;
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");					 /*图形方式初始化*/
    for (i = 0; i <= 200; i++)
    {
        setcolor(i % 16);							 /*设置绘图颜色，随着变量i的改变颜色改变*/
        setlinestyle(0, 0, 1);							 /*设置线形*/
        setfillstyle(1, 3);							 /*设置填充形式为青色实填充*/
        circle(300, 240, 200-i);						 /*画圆，随着i的改变半径逐渐变小*/
        floodfill(300, 240, i % 16);					 /*对指定的区域进行填充*/
        delay(1e20);								 /*间隔一段时间继续下次循环*/
    }
    for (j = 0; j <= 200; j++)
    {
        setcolor(j % 16);							 /*设置绘图颜色，随着变量j的改变颜色改变*/
        setlinestyle(0, 0, 1);							 /*设置线形*/
        setfillstyle(5, 14);							 /*设置填充形式为黄色粗反斜线填充*/
        circle(300, 240, j);							 /*画圆，随着j的改变半径逐渐变大*/
        floodfill(300, 240, j % 16);					 /*对指定的区域进行填充*/
        delay(1e20);								 /*间隔一段时间继续下次循环*/
    }
    getch();
    closegraph();								 /*退出图形界面*/
}
