#include <stdio.h>
main()
{
  float i,h=100,s=100;							/*定义变量i，h，s分别为单精度型并为h和s赋初值100*/
  for(i=1;i<=9;i++)							/*for语句，i的范围从1到9表示小球从第二次落地到第十次落地*/
  {
    h=h/2;									/*每落地一次弹起高度变为原来一半*/
    s+=h*2;								/*累积的高度和加上下一次落地后弹起与下落 的高度*/
  }
  printf("the total length is %f\n",s);				/*将高度和输出*/
  printf("the height of tenth time is %f",h/2);			/*输出第十次落地后弹起的高度*/
} 
