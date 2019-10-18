#include<stdio.h>
main()
{
  int n,t;							/*定义变量n，t为基本整型*/
  float a=2,b=1,sum=0;				/*定义变量a，b，sum单精度型并分别赋初值2，1，0*/
  for(n=1;n<=20;n++)					/*for循环变量n的范围从1到20*/
  {
    sum=sum+a/b;					/*累加求和*/
    t=a;a=a+b;b=t;					/*借助中间变量t完成后一个分数与前一个分数间数值间的转换*/
  }
  printf("sum is %f\n",sum);				/*将最终所求的和sum输出*/
} 
