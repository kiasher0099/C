#include<stdio.h>
main()
{
  int i,j;						/*定义变量i，j为基本整型*/
  printf("please input:\n");
  scanf("%d",&i);				/*用scanf函数获得i的值*/
  for(j=1;j<=i;j++)				/*for语句中j的取值范围从1到i*/
  if(i%j==0)					/*如果i对j取余的结果为0说明j是i的因子*/
  printf("%d,",j);					/*将每次求出的因子输出*/
} 
