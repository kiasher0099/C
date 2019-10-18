#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gdriver,gmode;
    int x;
    int color=1;
    gdriver=DETECT;
    initgraph(&gdriver,&gmode,"");						/*图形界面初始化*/
    cleardevice();									/*清屏*/
    setbkcolor(15);									/*设置背景颜色为白色*/
    setlinestyle(0,0,1);									/*设置线形为实线一点宽*/
    for(x=0;x<=640;x+=10)
    {
      setcolor(color);
      line(x,1,640-x,480);								/*从主对角线开始沿顺时针方向画直线*/
      delay(1e20);
      color++;
      if(color==15)
      color=1;
    }
    for(x=640;x>=0;x-=10)
    {
setcolor(15);
      line(640-x,480,x,1);								/*从副对角线开始沿逆时针用背景色来画直线*/
      delay(1e20);
    }
    getch();
    closegraph();									/*退出图形状态*/
}
