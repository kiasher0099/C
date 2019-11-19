/*
*  Fibonacci sequence is an array of f(n) = f(n-1) + f(n-2), n > 2 
*  beginning with 1, 1, ...
*/

#include <stdio.h>

int main ()
{
	int i, n, t1 = 0, t2 = 1, nextTerm, sum = 0;

	printf("Please select the number of the sequence you want to output: \n");
	scanf("%d", &n);

	printf("Fibonacci Sequence is: ");

	for (i = 1; i <= n; ++i)
	{
		printf("%d\t", t1);
        sum += t1 + t2;
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	printf("The sum of the sequence is: %d\n", sum);
	return 0;  
}
