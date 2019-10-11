#include <stdio.h>
#include <math.h>
main()
{
    int a, b, c, d, flag = 0;
    scanf("%d", &a); 										/*从键盘中输入一个偶数*/
    for (b = 3; b <= a / 2; b += 2)								/*因为拆分成素数，所以b每次加2*/
    {
        for (c = 2; c <= sqrt(b); c++)							/*判断b是否是素数*/
            if (b % c == 0)
                break;
        if (c > sqrt(b))
            d = a - b;									/*如果b是素数求出d*/
        else
            break;
        for (c = 2; c <= sqrt(d); c++)						/*判断d是否是素数*/
            if (d % c == 0)
                break;
        if (c > sqrt(d))
        {
            printf("the result is:%d=%d+%d\n", a, b, d); 			/*将拆分的结果输出*/
            flag = 1; 									/*flag置1说明至少可拆分成一组*/
        }
    }
    if (flag == 0)
        printf("can not split!");
}
