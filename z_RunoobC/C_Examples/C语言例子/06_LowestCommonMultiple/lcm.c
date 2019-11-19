/*
*	This code shows how to calc the least common multiple.
*	If input is less than zero, print error and try again
*/

#include <stdio.h>

int main()
{
	int n, i, error = 0;
	unsigned long long factorial = 1;
	
	do{
	printf("Please enter a number: \n");
	scanf("%d", &n);

	if (n < 0)
		printf("Error! Please enter a positive number");
	else 
		error = 1;
	}while(!error);

	for (i = 1; i <= n; ++i)
	{
		factorial *= i;
	}
	printf("%d! = %llu\n", n, factorial);
	
	return 0; 


}
