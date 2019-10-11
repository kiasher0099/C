#include<stdio.h>
main()
{
  float average(float array[],int n);					/*函数声明*/
  float height[100],aver;						
  int i,n;
  printf("please input the number of students:\n");
  scanf("%d",&n);							/*输入学生数量*/
  printf("please input student`s height:\n");
  for(i=0;i<n;i++)
  scanf("%f",&height[i]);						/*逐个输入学生的身高*/
  printf("\n");
  aver=average(height,n);						/*调用average函数求出平均身高*/
  printf("average height is %6.2f",aver);				/*将平均身高输出*/
}
float average(float array[],int n)					/*自定义求平均身高函数*/
{
  int i;
  float aver,sum=0;
  for(i=0;i<n;i++)
  sum+=array[i];								/*用for语句实现sum累加求和*/
  aver=sum/n;								/*总和除以人数求出平均值*/
  return(aver);								/*返回平均值*/
}   
