#include <stdio.h>
#include <string.h>
insert(char *s, char *q, int i);
int main(void)
{
    char *strin,  *str;
    int i;
    str = "Hello world!";
    strin = "big ";
    printf("The original string:");
    printf("\n%s\n", str);
    printf("Please input the positon you want to insert:");
    scanf("%d", &i);

    str = insert(str, strin, i);
    printf("\n%s", str);
    getch();

}

insert(char *s, char *q, int n)
{
    int i = 0;
    char *str, strcp[60];
    str = strcp;

    for (i = 0;  *s != '\0'; i++)
    {
        if (i == n - 1)
        {
            for (;  *q != '\0';)
            {
                str[i] =  *q;
                q++;
                i++;
            }
        }
        str[i] =  *s;
        s++;
    }
    str[i] = '\0';
   
    return str;
}
