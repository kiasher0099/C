#include <stdio.h>

int main()
{
	int num;
	
	printf("Please enter a number: \n");
	scanf("%d",&num);

	(num%2==0)?printf("This is an even number\n"):printf("This is an odd number\n");

}
