#include <stdlib.h>
#include <math.h>
#include <graphics.h>
int size, color = 1;
void *save1,  *save2;
void save();
void dsnow();
void font();
struct Snow
{
    int x;
    int y;
    int speed;
} snow[100];
void save()
{
    int i, x, y;
    setcolor(WHITE);
    for (i = 1; i <= 6; i++)
    {
        x = 200+5 * sin(i *3.1415926 / 3);
        y = 200-5 * cos(i *3.1415926 / 3);
        line(200, 200, x, y);
    }
    size = imagesize(195, 195, 205, 205);
    save1 = malloc(size);
    save2 = malloc(size);
    getimage(195, 195, 205, 205, save1);
    getimage(100, 100, 110, 110, save2);
}
void font()
{
    setcolor(color);
    settextstyle(0, 0, 4);
    outtextxy(80, 200, "HAPPPY NEW YEAR");
    color++;
    if (color > 15)
        color =1;
}
void dsnow()
{
    int a[66], i, num = 0;
    randomize();
    for (i = 0; i < 66; i++)
        a[i] = (i - 2) *10;
    cleardevice();
    while (!kbhit())
    {
        font();
        if (num != 100)
        {
            snow[num].speed = 2+random(10);
            i = random(66);
            snow[num].x = a[i];
            snow[num].y = 0;
        }
        for (i = 0; i < num; i++)
            putimage(snow[i].x, snow[i].y, save2, COPY_PUT);
        font();
        if (num != 100)
            num++;
        for (i = 0; i < num; i++)
        {
            snow[i].y += snow[i].speed;
            putimage(snow[i].x, snow[i].y, save1, COPY_PUT);
            if (snow[i].y > 500)
                snow[i].y = 0;
        }
    }
}
main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    save();
    dsnow();
    getch();
    closegraph();
}
