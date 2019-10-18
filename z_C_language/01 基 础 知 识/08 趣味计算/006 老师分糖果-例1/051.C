#include <stdio.h>
main()
{
  int n;					
  float sum1,sum2;							/*sum1和sum2应为单精度型，否则结果将不准确*/
  for(n=11;;n++)									
  {
    sum1=(n+9)/10.0;									
    sum2=(9*n+171)/100.0;
    if(sum1!=(int)sum1)continue;					/*sum1和sum2应为整数，否则结束本次循环继续下次判断*/
    if(sum2!=(int)sum2)continue;
    if(sum1==sum2) break;						/*当sum1等于sum2时，跳出循环*/
  }
  printf("\n the number of students is %d\n gong fen le %d fen",(int)(n/sum1),n);	
										/*输出学生数及分成的份数*/
} 
