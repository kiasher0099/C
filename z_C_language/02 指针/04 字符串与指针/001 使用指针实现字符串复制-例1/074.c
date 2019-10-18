#include <stdio.h>
copy(char *s, char *q);
int main(void)
{
    char *str,  *p;
    str = "Hello world!";
    copy(str, p);
    printf("%s", p);
    getch();
    return 1;
}

copy(char *s, char *q)
{
  
    for (;  *s != '\0';)
    {
        *q =  *s;
        s++;
        q++;
    }
    *q = '\0';
}
