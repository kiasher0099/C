/*
*  Fibonacci sequence is an array of f(n) = f(n-1) + f(n-2), n > 2 
*  beginning with 1, 1, ...
*  This C shows how to output N numbers of item in sequence
*/

#include <stdio.h>

int main ()
{
	int i, n, t1 = 0, t2 = 1, nextTerm = 0;

	printf("Please select the max number(under Fibonacci Sequence) to output: \n");
	scanf("%d", &n);

	printf("Fibonacci Sequence is: %d\t%d\t", t1, t2);

	nextTerm = t1 + t2;

	while (nextTerm <= n)
	{
		printf("%d\t", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return 0;  
}
