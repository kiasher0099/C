#include <stdio.h>
main()
{
    int i, j, number, n;
    for (number = 1; number < 6; number++)
        for (n = 1; n < 4; n++)
    if ((4 *number + 6 * n == 26) && (number *(number + n)*(number + 2 * n)*
        (number + 3 * n)) == 880)
    {
        printf("The result is:\n");
        for (j = 1; j <= 20; j++)
        {
            printf("%3d", number);
            number += n;
            if (j % 5 == 0)
                    printf("\n");
        }
    }
}
