#include <iostream>
using namespace std;

int main()
{
	unsigned int a = 60;	// 60 = 0011 1100
	unsigned int b = 13;	// 13 = 0000 1101
	int c = 0;
	cout << "unsigned int a = 60, unsigned int b = 13, int c" << endl;

	c = a & b;				// 0000 1100 = 12
	cout << "a & b = " << c << endl;
	c = a | b;				// 0011 1101 = 61
	cout << "a | b = " << c << endl;
	c = a ^ b;				// 0011 0001 = 49
	cout << "a ^ b = " << c << endl;
	c = ~a;					// 1100 1100 = 195
	cout << "a ~ b = " << c << endl;
	c = a << 2;				// 1111 0000 = 240
	cout << "a << 2 = " << c << endl;
	c = a >> 2;				// 1111 0000 = 240
	cout << "a >> 2 = " << c << endl;

	return 0;
}
