
#include "stdio.h"
int main()
{
    char *Month[] =
    {
        "January", "February", "March", "April", "May", "June", "Junly",
            "August", "September", "October", "November", "December"
    };
    int i;
    char **p;
    p = Month;
    printf("Input a number for month\n");
    scanf("%d", &i);
    printf("The month is:");
    printf("%s\n", *(p + i - 1));
    getch();
    return 0;
}
