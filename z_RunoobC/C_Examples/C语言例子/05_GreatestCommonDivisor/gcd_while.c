/* 
*	This gcd use 'while and if' to implement.
*	This code doesn't consider negative values.
*/

#include <stdio.h>

int main ()
{
	int n1, n2;

	printf("Please enter two positive numbers, seperate by space:\n");
	scanf("%d %d", &n1, &n2);

/* 
*	Add this 2 lines if you want to enter a negative number
*	n1 = ( n1 > 0) ? n1 : -n1;
* 	n2 = ( n2 > 0) ? n2 : -n2;
*/

	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else 
			n2 -= n1;
	}  

	printf("Gcd is: %d\n", n1);

	return 0;
}
