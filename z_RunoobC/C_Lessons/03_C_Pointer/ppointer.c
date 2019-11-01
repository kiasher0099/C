#include <stdio.h>

int main ()
{
	int var = 10000;

	int *ptr;
	int **pptr;

	ptr = &var;				// get the value of var (int value)
	pptr = &ptr;			// get the value of ptr (pointer value)

	printf("The value of 'var' is: \t%d and address is: \t%p\n", var, &var);

	printf("The value available at pointer 'ptr': \t%d and address is: \t%p\n", *ptr, ptr);

	printf("The value available at pointer 'pptr': \t%p and address is: \t%p\n", *pptr, pptr);

	return 0;
}
