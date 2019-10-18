#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.1415926
double a = 10.0, b = 0.0;
char ch;
void ball()										 /*自定义函数ball画小球*/
{
    int i,j;
    setcolor(RED);
    setfillstyle(1, 15);
    circle(100, 100, 50);
    floodfill(100, 100, RED);
    ellipse(100, 100, 90, 270, 20, 50);
    ellipse(100, 100, 180, 360, 50, 20);
    for (i =  - 18; i < 18; i++)
        ellipse(100, 100, 5 *i, 5 *i + 1, 20, 50);
    for (j = 0; j < 36; j++)
        ellipse(100, 100, 5 *j, 5 *j + 1, 50, 20);
}

main()
{
    int gdrive = DETECT, gmode, k, t, size;
    void *buf;
    initgraph(&gdrive, &gmode, "");					 /*图形方式初始化*/
    setcolor(GREEN);								 /*设置背景颜色为绿色*/
    ball();										 /*调用函数ball*/
    size = imagesize(50, 50, 150, 150);					 /*返回这个图像存储所需字节数*/
    buf = malloc(size);							 /*buf指向在内存中分配的空间*/
    getimage(50, 50, 150, 150, buf);					 /*保存图像到buf指向的内存空间*/
    for (t = 0; t <= 50; t++)
    {
        cleardevice();								 /*清屏*/
        putimage(a, b, buf, COPY_PUT);				 /*在指定的位置输出先前保存的图形*/
        delay(1e15);
        b = 200-150 * sin(0.5 *a);					 /*图形沿正弦曲线跳动*/
        a = a + 10;								 /*自左向右跳动*/
    }
    getch();
    closegraph();								 /*退出图形模式*/
}
