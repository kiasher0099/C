#include<string.h>
#include<stdio.h>
#define Maxsize 100
typedef struct/*定义结构体，用来存储串的相关信息*/
{
char string[Maxsize];
int len;
}str;/*定义str为该结构体类型*/
int findstr(str s,str t)/*自定义函数findstr*/
{
int i=1,j=0,k=0,pos;
while(i<s.len&&j<t.len)
{
if(s.string[k]==t.string[j])/*判断主串与模式串对应元素是否匹配*/
{
k++;/*主串向后移一位*/
j++;/*模式串向后移一位*/
}
else
{/*主串和模式串重新退回，从主串的下一个位置开始下一次匹配*/
i++;
k=i;
j=0;
}
}
if(j==t.len)/*判断模式串是否已经匹配到最后一个字符*/
pos=k-j+1;/*指向匹配成功的第一个字符*/
else pos=-1;
return(pos);
}
main()
{
str s,t;
int p;
printf("qing shu ru zhu cuan:\n");
scanf("%s",s.string);/*从键盘中输入主串*/
s.len=strlen(s.string);
printf("qing shu ru mo shi cuan:\n");
scanf("%s",t.string);/*从键盘中输入模式串*/
t.len=strlen(t.string);/*获取模式串的长度*/
p=findstr(s,t);/*调用findstr函数返回值赋给p*/
if(p==-1)
printf("no matching!");/*返回值如果为-1说明未匹配*/
else
printf("matching!the position is: %d",p);/*将匹配位置输出*/
}

