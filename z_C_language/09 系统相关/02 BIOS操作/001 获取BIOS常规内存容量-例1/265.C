#include <stdio.h>
#include <bios.h>
main() 
{ 
  int memsize;
  memsize=biosmemory();
  printf("\nBIOS regular memory size is %dKb",memsize);
  getch();
}
