#include <stdio.h>
main()
{
    int a, b, c;
    for (a = 1; a <= 3; a++)								/*穷举a的所有可能*/
        for (b = 1; b <= 3; b++)							/*穷举b的所有可能*/
            for (c = 1; c <= 3; c++)						/*穷举c的所有可能*/
                if (a != 1 && c != 1 && c != 3 && a != b && a != c && b != c)
												/*如果表达式为真，则输出结果，否则继续下次循环*/
    {
        printf("%c will marry to a\n", 'x' + a - 1);
        printf("%c will marry to b\n", 'x' + b - 1);
        printf("%c will marry to c\n", 'x' + c - 1);
    }
} 
