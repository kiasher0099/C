#include<math.h>
#include<stdio.h>
main()
{
float number;
double f,i;
printf("input the number:");
scanf("%f",&number);/*输入要分解的小数*/
f=modf(number,&i);/*调用modf函数进行分离*/
printf("%f=%f+%f",number,i,f);/*将分离后的结果按指定格式输出*/
getch();
}