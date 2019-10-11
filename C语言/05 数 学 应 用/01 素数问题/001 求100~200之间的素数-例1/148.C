#include <stdio.h>
#include <math.h>
main()
{
    int i, j, n = 0;
    clrscr();
    for (i = 100; i <= 200; i++)
        for (j = 2; j <= sqrt(i); j++)
            if (i % j == 0)
                break;
            else
    if (j > sqrt(i) - 1)
    {
        printf("%d,", i);
        n++;
        if (n % 5 == 0)
            printf("\n");
    }
    else
        continue;
}
