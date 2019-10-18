#include<stdio.h>
#define swap(a,b) {int c;c=a;a=b;b=c;}/*定义一个带参的宏swap*/
main()
{
int i,j,a[10],b[10];/*定义数组及变量为基本整型*/
printf("please input array a:\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);/*输入一组数据存到数组a中*/
printf("please input array b:\n");
for(j=0;j<10;j++)
scanf("%d",&b[j]);/*输入一组数据存到数组b中*/
printf("\nthe array a is:\n");
for(i=0;i<10;i++)
printf("%d,",a[i]);/*输出数组a中的内容*/
printf("\nthe array b is:\n");
for(j=0;j<10;j++)
printf("%d,",b[j]);/*输出数组b中的内容*/
for(i=0;i<10;i++)
swap(a[i],b[i]);/*实现数组a与数组b对应值互换*/
printf("\nNow the array a is:\n");
for(i=0;i<10;i++)
printf("%d,",a[i]);/*输出互换后数组a中的内容*/
printf("\nNow the array b is:\n");
for(j=0;j<10;j++)
printf("%d,",b[j]);/*输出互换后数组b中的内容*/
}