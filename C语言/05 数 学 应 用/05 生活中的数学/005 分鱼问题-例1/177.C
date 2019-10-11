#include <stdio.h>
main()
{
    int sum, i, j, n = 0;										/*定义变量为基本整型*/
    for (sum = 100; sum < 10000; sum++)
    {
        j = sum;
        n = 0;
        while ((j - 1) % 5 == 0)								/*如果j-1能被5整除，则执行循环体语句*/
        {
            n++;										/*n起计数作用*/
            if (n == 5)									/*当n=5时说明sum值即为所求结果*/
            {
                printf("the total number of fish is %d", sum);		/*将sum输出*/
                exit(0);
            }
            else
                j = (j - 1) *4 / 5;							/*每次剩余的鱼的数量*/
        }
    }
}
