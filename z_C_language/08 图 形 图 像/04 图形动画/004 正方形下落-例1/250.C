#include <stdlib.h>
#include <graphics.h>
main()
{
    int gdriver = DETECT, gmode;
    int i, size;
    void *buf;
    initgraph(&gdriver, &gmode, "");						/*图形方式初始化*/
    setbkcolor(3);									/*设置背景颜色为青色*/
    setcolor(RED);									/*设置绘图颜色为红色*/
    rectangle(80, 80, 100, 100);							/*画正方形*/
    size = imagesize(80, 80, 100, 100);						/*返回这个图像存储所需字节数*/
    buf = malloc(size);								/*buf指向在内存中分配的空间*/
    getimage(80, 80, 100, 100, buf);						/*保存图像到buf指向的内存空间*/
    for (i = 1; i <= 40; i++)
    {
        cleardevice();
        putimage(300, 20+i * 10, buf, COPY_PUT);			/*将保存的图像输出到指定位置*/
        delay(1e20);
    }
    for (i = 1; i < 50; i++)
    {
        cleardevice();
        putimage(0+i * 15, 0+i * 10, buf, COPY_PUT);		/*将保存的图像输出到指定位置*/
        putimage(640-i * 15, 0+i * 10, buf, COPY_PUT);		/*将保存的图像输出到指定位置*/
        delay(1e20);
    }
    getch();
    closegraph();										/*退出图形状态*/
}
