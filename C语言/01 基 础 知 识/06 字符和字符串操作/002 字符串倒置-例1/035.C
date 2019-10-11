#include<stdio.h>
#include<string.h>
#define N 100					/*定义N为100*/
void convert(char s[N])				/*自定义函数，参数为字符型数组*/
{
    int i,j;					/*定义变量i，j为基本整型*/
    char temp;					/*定义变量temp为字符型*/
    for(i=0; i<strlen(s)/2; i++)		/*使用for语句实现字符串位置倒置*/
    {   j=strlen(s)-1;				/*长度减1因为数组起始坐标从0开始*/
        temp=s[i];
        s[i]=s[j-i];
        s[j-i]=temp;

    }
    printf("\nNow string:\n%s",s);		/*输出倒置后的字符串*/

}
main()
{
    int i;
    char str[N];				/*定义字符型数组*/
    printf("Enter the string:\n");
    gets(str);					/*gets函数获得字符串*/
    printf("Origin str:\n%s",str);
    convert(str);				/*调convert函数*/

}