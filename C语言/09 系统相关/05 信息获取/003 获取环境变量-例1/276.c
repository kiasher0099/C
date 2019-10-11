#include <stdio.h>
#include <dos.h>

int main(void)
{
   char *path, *ptr;
   int i = 0;
   puts(" This program is to get the information of environ.");

   while (environ[i]) 
       printf(" >> %s\n",environ[i++]);
   printf(" Press any key to quit...");
   getch();
   return 0;
}