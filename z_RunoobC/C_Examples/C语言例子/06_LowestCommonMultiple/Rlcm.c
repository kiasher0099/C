/*
*	This code shows how to calc the least common multiple by using Recursive.
*	If input is less than zero, print error and try again
*/

#include <stdio.h>
long long int multiplyNumbers(int n);
int main()
{
	int n;
	printf("Please enter a positive number: \n");
	scanf("%d", &n);

	printf("%d! = %llu\n", n, multiplyNumbers(n));	
	return 0; 
}

long long int multiplyNumbers(int n)
{
	if (n >= 1)
		return n*multiplyNumbers(n-1);
	else
		return 1;
}
