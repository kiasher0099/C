#include <stdio.h>

int main()
{
	int _int_a;
	long _long_b;
	long long _long_long_c;

	double _double_e;
	long double _long_double_f;

	char _char_g;
	float _float_h;
	
	printf("Size of int: %ld bytes\n", sizeof(_int_a));
	printf("Size of long: %ld bytes\n", sizeof(_long_b));
	printf("Size of long long: %ld bytes\n", sizeof(_long_long_c));
	printf("Size of double: %ld bytes\n", sizeof(_double_e));
	printf("Size of long double: %ld bytes\n", sizeof(_long_double_f));
	printf("Size of char: %ld bytes\n", sizeof(_char_g));
	printf("Size of float: %ld bytes\n", sizeof(_float_h));

	return 0;
}

