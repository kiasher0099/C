#include<stdio.h>
main()
{
    int j=0,a[5];            /*数组a存放分解的数字位*/
    long k=100000,i=95860;/*因为95860是五位数故k=100000*/
    while(1)    
    {      j=0;/*j为数组下标*/
    k=100000;
	while(k>=10)   
        {                              
	    a[j]=(i%k)/(k/10);/*从高到低分解i值的每位数存到数组中*/
	    k/=10;
	    j++;
        }
        if((a[0]==a[4])&&(a[1]==a[3]))/*比较第一位和第五位、第二位和第四位是否相同*/
        {
	    printf("The new number kelometers is:%d%d%d%d%d\n",
                                  a[0],a[1],a[2],a[3],a[4]);/*输出新的对称数*/
	    printf("an average speed is: %.2f\n",(i-95859)/2.0);/*将求出的平均速度输出*/
            break;
        }
		i++;
    }
}
