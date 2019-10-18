#include <stdio.h>
main()
{
    int year;											 /*定义基本整型变量year*/
    printf("please input the year:\n");
    scanf("%d", &year);									 /*从键盘输入表示年份的整数*/
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)		 /*判断闰年条件*/
        printf("%d is a leap year", year);						 /*满足条件的输出是闰年*/
    else
        printf("%d is not a leap year", year);						 /*否则输出不是闰年*/
} 
