#include <graphics.h>
#include <stdlib.h>
int main()
{
    int i, j, gdriver, gmode, size;
    void *buf;
    gdriver = DETECT;
    initgraph(&gdriver, &gmode, "");							 /*初始化图形界面*/
    setbkcolor(BLUE);									 /*设置背景颜色为蓝色*/
    cleardevice();										 /*清屏*/
    setcolor(LIGHTRED);									 /*设置绘图颜色为淡红色*/
    setlinestyle(0, 0, 1);									 /*设置线形为实线一点宽*/
    setfillstyle(1, 10);										 /*设置填充形式为淡绿色实填充*/
    circle(130, 200, 30);									 /*画圆，圆心为（130，200），半径为30*/
    floodfill(130, 200, 12);									 /*对指定区域进行填充*/
    ellipse(130, 200, 90, 270, 10, 30);							 /*画椭圆线*/
    ellipse(130, 200, 180, 360, 30, 10);
    for (i =  - 18; i < 18; i++)
        ellipse(130, 200, 5 *i, 5 *i + 1, 10, 30);
    for (j = 0; j < 36; j++)
        ellipse(130, 200, 5 *j, 5 *j + 1, 30, 10);
    size = imagesize(99, 169, 161, 231);							 /*返回这个图像存储所需字节数*/
    buf = malloc(size);									 /*buf指向在内存中分配的空间*/
    if (!buf)
        return  - 1;
    getimage(99, 169, 161, 231, buf);							 /*保存图像到buf指向的内存空间*/
    for (i = 0; i < 170; i++)
    {
        putimage(100+i, 170, buf, COPY_PUT);					 /*在指定的位置输出先前保存的图形*/
        putimage(500-i, 170, buf, COPY_PUT);
    }
    for (i = 0; i < 170; i++)
    {
        putimage(270-i, 170, buf, COPY_PUT);
        putimage(330+i, 170, buf, COPY_PUT);
    }
    for (i = 0; i < 336; i++)
        putimage(100+i, 170, buf, COPY_PUT);
    for (i = 0; i < 336; i++)
        putimage(436-i, 170, buf, COPY_PUT);
    for (i = 0; i < 336; i++)
        putimage(500-i, 170, buf, COPY_PUT);
    for (i = 0; i < 336; i++)
        putimage(164+i, 170, buf, COPY_PUT);
    getch();
    closegraph();										 /*退出图形状态*/
}
