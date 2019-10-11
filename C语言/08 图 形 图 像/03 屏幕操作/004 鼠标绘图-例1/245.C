#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
main()
{
    union REGS r;										/*定义r为共同体REGS类型*/
    int gdriver = DETECT, gmode;
    int x, y, c, color;
    initgraph(&gdriver, &gmode, "");							/*图形方式初始化*/
    while (!kbhit())										/*当无按键时执行循环体语句*/
    {
        r.x.ax = 1;										/**/
        int86(0x33, &r, &r);
        r.x.ax = 3;
        int86(0x33, &r, &r);
        x = r.x.cx;
        y = r.x.dx;
        c = r.x.bx;
        if (c == 2)
        {
            color = rand() % 16;
            setcolor(color);
        } if (c == 1)
        {
            r.x.ax = 2;
            int86(0x33, &r, &r);
            line(x, y, x + 2, y + 2);
        }
    }
} 
