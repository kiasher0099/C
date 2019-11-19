/* 
*	This gcd use 'for and if' to implement.
*	This code doesn't consider negative values.
*/

#include <stdio.h>

int main ()
{
	int n1, n2, i, gcd;

	printf("Please enter two positive numbers, seperate by space:\n");
	scanf("%d %d", &n1, &n2);

	for (i = 1;i <= n1 && i <= n2; ++i)
	{
		//Decide if i is gcd
		if (n1%i == 0 && n2%i == 0)
			gcd = i;
	}  

	printf("%d and %d has a gcd of: %d\n", n1, n2, gcd);

	return 0;
}
