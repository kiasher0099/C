#include <stdio.h>
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
    int i;
    for (i = 10; i < 1000; i++)
        if (ss(i) == 1)
    if (i / 100 == 0)
    {
        if (i / 10 == i % 10)
                printf("%5d", i);
    }
    else
        if (i / 100 == i % 10)
            printf("%5d", i);
}
