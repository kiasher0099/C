#include <bios.h>
#define UP 0x4800
#define DOWN 0x5000
#define LEFT 0x4b00
#define RIGHT 0x4d00
#define SPACE 0x3920
#define ENTER 0x1c0d
main()
{
    struct point
    {
        int x, y;
    } a;												/*定义a为结构体point类型*/
    int key, key1;
    a.x = 40;											/*设置光标的初始位置*/
    a.y = 10;
    clrscr();
    gotoxy(a.x, a.y);										/*光标定位在指定位置*/
    printf("%c", 6);
    while (bioskey(1) == 0)
    {
        key = bioskey(0);									/*将所按键盘的控制码赋给key*/
        switch (key)
        {
            case UP:										/*当按键为向上键时实现向上画图*/
                {
                    a.y -= 1;								/*纵坐标减1*/
                    if (a.y == 0)
                        a.y = 24;
                    gotoxy(a.x, a.y);
                    printf("%c", 6);
                    break;
                }
            case DOWN:									/*当按键为向下键时实现向下画图*/
                {
                    a.y += 1;								/*纵坐标加1*/
                    if (a.y == 24)
                        a.y = 1;
                    gotoxy(a.x, a.y);
                    printf("%c", 6);
                    break;
                }
            case LEFT:									/*当按键为向左键时实现向左画图*/
                {
                    a.x -= 1;								/*横坐标减1*/
                    if (a.x == 0)
                        a.x = 80;
                    gotoxy(a.x, a.y);
                    printf("%c", 6);
                    break;
                }
            case RIGHT:									/*当按键为向右键时实现向右画图*/
                {
                    a.x += 1;								/*横坐标加1*/
                    if (a.x == 80)
                        a.x = 1;
                    gotoxy(a.x, a.y);
                    printf("%c", 6);
                    break;
                }
            case ENTER:									/*当按键为回车键时光标跳到下一列且不画图*/
                {
                    a.y += 1;								/*纵坐标加1*/
                    if (a.y == 24)
                        a.y = 1;
                    gotoxy(a.x, a.y);
                    break;
                }
            case SPACE:									/*当按键为空格键时执行大括号内的语句*/
                {
                    while (bioskey(1) == 0)
                    {
                        key1 = bioskey(0);					/*将所按键盘的控制码赋给key*/
                        switch (key1)
                        {
                        case UP:							/*当按键为向上键时向上清除所画图像*/
                            {
                                a.y -= 1;
                                if (a.y == 0)
                                    a.y = 24;
                                gotoxy(a.x, a.y);
                                putch(' ');
                                break;
                            }
                        case DOWN:						/*当按键为向下键时向下清除所画图像*/
                            {
                                a.y += 1;
                                if (a.y == 24)
                                    a.y = 1;
                                gotoxy(a.x, a.y);
                                putch(' ');
                                break;
                            }
                        case LEFT:							/*当按键为向左键时向左清除所画图像*/
                            {
                                a.x -= 1;
                                if (a.x == 0)
                                    a.x = 80;
                                gotoxy(a.x, a.y);
                                putch(' ');
                                break;
                            }
                        case RIGHT:						/*当按键为向右键时向右清除所画图像*/
                            {
                                a.x += 1;
                                if (a.x == 80)
                                    a.x = 1;
                                gotoxy(a.x, a.y);
                                putch(' ');
                                break;
                            }
                        case ENTER:						/*当按键为回车键时光标跳到下一列且不画图*/
                            {
                                a.y += 1;
                                if (a.y == 24)
                                    a.y = 1;
                                gotoxy(a.x, a.y);
                                break;
                            }
                        }
                        if (key1 == 0x3920)					/*当按键为空格键时，跳出循环*/
                            break;
                    }
                }
        }
        if (key == 0x011b)									/*当按键为esc时，退出循环*/
            break;
    }
} 
