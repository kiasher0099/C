#include <stdio.h>
#include <math.h>
int ss(int i)
{
    int j;
    if (i <= 1)
        return 0;
    if (i == 2)
        return 1;
    for (j = 2; j < i; j++)
    {
        if (i % j == 0)
            return 0;
        else if (i != j + 1)
            continue;
        else
            return 1;
    }
}
main()
{
    int i, n = 0, n1, n2, n3, n4;
    clrscr();
    for (i = 1000; i < 10000; i++)
    if (ss(i) == 1)
    {
        n4 = i % 10;
        n3 = (i % 100) / 10;
        n2 = (i / 100) % 10;
        n1 = i / 1000;
        if (ss(1000 *n4 + 100 * n3 + 10 * n2 + n1) == 1 && 1000 *n4 + 100 * n3
            + 10 * n2 + n1 > i)
        {
            printf("%d,", i);
            n++;
            if (n % 10 == 0)
                printf("\n");
        }
    }
}
