#include <stdio.h>
#include <stdlib.h>

int k1 = 1;
int k2;
static int k3 = 2;
static int k4;

int main()
{
	static int m1 = 2, m2;
	int i = 1;
	char *p;
	char str[10] = "hello";
	char *q = "hello";

	p = (char *)malloc( 100 );
	free(p);

//  Stack stores variables like i, p, str, q, they are all local variables
	printf("stack area - variables address 		i: %p\n", &i);
	printf("stack area - variables address 		p: %p\n", &p);
	printf("stack area - variables address 	  str: %p\n", &str);
	printf("stack area - variables address 	    q: %p\n", &q);
//  Heap stores malloc() which is determined by Programmer
	printf("Heap area - malloc: 			    %p\n", p);
	printf("Global int with value:	           k1: %p\n", &k1);
	printf("Global int no value: 		       k2: %p\n", &k2);
	printf("Static int with value:             k3: %p\n", &k3);
	printf("Static int no value:    		   k4: %p\n", &k4);
	printf("Local static int with value:	   m1: %p\n", &m1);
	printf("Local static int no value:		   m2: %p\n", &m2);
	printf("Literal constant address:		   %p, %s\n", q, q);
	printf("Main program address:  		       %p\n", &main);

	return 0;
}
