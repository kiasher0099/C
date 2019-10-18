#include<stdio.h>
main()
{
struct student_score/*定义结构体，用来存储期中、期末及平均成绩*/
{
int mid;
int end;
int ave;
}score;
printf("please input score(midterm and end of term):");
scanf("%d,%d",&score.mid,&score.end);/*输入期中、期末成绩*/
score.ave=(score.mid+score.end)/2;/*计算出平均成绩*/
printf("average=%d\n",score.ave);/*将平均成绩输出*/
}