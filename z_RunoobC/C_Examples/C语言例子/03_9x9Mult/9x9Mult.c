#include <stdio.h>

int main ()
{
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			printf("%d x %d = %d\t", j, i, i*j);
		}
		printf("\n");
	}

	return 0;
}
