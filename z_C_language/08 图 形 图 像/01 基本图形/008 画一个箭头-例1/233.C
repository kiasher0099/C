#include<conio.h>
#include<stdio.h>
void window_3d( int x1, int y1, int x2, int y2, int bk_color, int fo_color)
{
	textbackground(BLACK);								//文字的背景颜色
	window(x1, y1,x2, y2); 									//绘制矩形
	clrscr();												//清屏
	textbackground(bk_color); 								//文字的背景颜色
	textcolor(fo_color);										//设置文字颜色
	window(x1-2, y1-1, x2-2, y2-1); 							//绘制矩形
	clrscr();												//清屏
}

void window_3d( int, int, int, int, int, int );
int main(void)
{
	directvideo = 0;
	textmode(3);											//设置文本模式
	textbackground( WHITE );								//设置文字背景颜色
	textcolor( BLACK );									//设置文字颜色
	clrscr();												//清屏
	window_3d(10,4,50,12, BLUE, WHITE );				//绘制窗口投影
	gotoxy( 17,6);											//指定坐标
	cputs("The first window");								//输出字符串
	window_3d(20,10,60,18,RED, WHITE );					//绘制窗口投影
	gotoxy(17,6);											//指定坐标
	cputs("The second window");								//输出字符串到控制台
	getch();
	return 0;
}
void window_3d( int x1, int y1, int x2, int y2, int bk_color, int fo_color)
{
	textbackground(BLACK);								//设置文字背景颜色
	window(x1, y1,x2, y2); 									//绘制矩形
	clrscr();												//清屏
	textbackground(bk_color); 								//设置文字背景颜色
	textcolor(fo_color);										//设置文字颜色
	window(x1-2, y1-1, x2-2, y2-1); 							//绘制矩形
	clrscr();												//清屏
}
