#include <stdio.h>
main()
{
    float x, m1, m2, m;
    char y, z;
    scanf("%f,%c,%c", &x, &y, &z); 							/*输入选择油的千克数、种类及服务*/
    switch (y)
    {
        case 'a':
            m1 = 3.25;
            break;
        case 'b':
            m1 = 3.00;
            break;
        case 'c':
            m1 = 2.75;
            break;
    }
    switch (z)
    {
        case 'a':
            m2 = 0;
            break;
        case 'm':
            m2 = 0.05;
            break;
        case 'e':
            m2 = 0.1;
            break;
    }
    m = x * m1 - x * m1 * m2; 								/*计算应付的钱数*/
    printf("the type of oil is:%c\n", y);
    printf("the type of server is:%c\n", z);
    printf("the money is:%.3f", m);
}
