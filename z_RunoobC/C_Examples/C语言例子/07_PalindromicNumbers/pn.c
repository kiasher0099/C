/*
*	The palindromic number is a list of numbers which equal to the reverse sequence of itself, for example:
*	123454321, 12321, 212, 121...
*/
#include <stdio.h>
int main()
{
	int n, reversedInteger = 0, remainder, originalInteger;

	printf("Please enter a positive number:\n");
	scanf("%d", &n);

	originalInteger = n;

	//reverse
	while (n != 0)
	{
		remainder = n % 10;
		reversedInteger = reversedInteger * 10 + remainder;
		n /= 10;
	}
	if (originalInteger == reversedInteger)
		printf("%d is Palindromic Number.\n", originalInteger);
	else
		printf("%d is not Palindromic Number.\n", originalInteger);

	return 0;
}
