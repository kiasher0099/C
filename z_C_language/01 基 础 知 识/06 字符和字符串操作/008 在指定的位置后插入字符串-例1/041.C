#include<stdio.h>
#include<string.h>
char insert (char s[],  char  t[],  int i)					/*自定义函数insert*/
{
  char string[100];								/*定义数组string作为中间变量*/
  if  ( i < 0||i > strlen (s) )							/*当i超出输入字符串的长度将输出error*/
  {
    printf ( "error!!\n");
    exit (1);
  }
  if  (!strlen (s))					
    strcpy (s,  t);					/*若s数组长度为0，则直接将t数组内容复制到s中*/
    else   if (strlen (t))				/*若长度不为空，执行以下语句*/
	   {
	     strncpy (string,s,i);			/*将s数组中的前i个字符复制到string中*/
	     string[i]='\0';				
	     strcat (string,t) ;				/*将t中字符串连接到string*/
	     strcat (string,(s+i));			/*将s中剩余字符串连接到string*/
	     strcpy (s,string);				/*将string中字符串复制到s中*/
	     return s;					/*返回值为s*/
	   }
}
main ()
{
  char str1[100],str2[100];				/*定义str1，str2两个字符型数组*/
  int position;						/*定义变量position为基本整型*/
  printf("please input str1:\n");
  gets(str1);						/*gets函数获得第一个字符串*/
  printf("please input str2:\n");
  gets(str2);						/*gets函数获得第二个字符串*/
  printf("please input position:\n");
  scanf("%d",&position);				/*输入字符串二插入字符串一的位置*/
  insert(str1,str2,position);				/*调用insert函数*/
  puts(str1);						/*输出最终得到的字符串*/
}  
