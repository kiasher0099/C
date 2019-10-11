#include<dir.h>
#include<stdio.h>
main()
{
if(!mkdir("temp"))
printf("directory temp is created\n");
else
{
printf("unable to create new directory\n");
exit(1);
}
getch();
}