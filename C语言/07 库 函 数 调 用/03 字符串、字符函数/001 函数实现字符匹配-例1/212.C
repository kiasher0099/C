#include<stdio.h>
#include<string.h>
main()
{
char string[50];
char *str,ch;
printf("please input string:\n");
gets(string);/*输入字符串到数组str中*/
printf("please input the character which do you want to find:\n");
scanf("%c",&ch);/*输入要进行匹配的字符*/
str=strchr(string,ch);/*调用strchr()函数*/
if(str)/*判断返回的指针是否为空*/
{
printf("the character %c is at position:%d\n",ch,str-string);/*将字符出现的位置输出*/
printf("the rest string from %c is:%s\n",ch,str);/*输出余下字符*/
}
else
printf("the character was not found.\n");/*当未找到时输出提示信息*/
}