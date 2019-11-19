/* 
*	This gcd use 'while and if' to implement.
*	This code doesn't consider negative values.
*/

#include <stdio.h>
int hcf(int n1, int n2);
int main ()
{
	int n1, n2;

	printf("Please enter two positive numbers, seperate by space:\n");
	scanf("%d %d", &n1, &n2);

	printf("%d and %d has a gcd of: %d\n", n1, n2, hcf(n1,n2));
	return 0;
}

int hcf(int n1, int n2)
{
	if (n2 != 0)
		return hcf(n2, n1%n2);
	else
		return n1;
}
