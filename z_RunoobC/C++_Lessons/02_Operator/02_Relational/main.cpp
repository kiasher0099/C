#include <iostream>
using namespace std;

int main()
{
	int a = 21, b = 10, c;
	cout << "a = " << a << " b =" << b << endl;
	if ( a == b )
		cout << "a = b" << endl;
	else
		cout << "a != b" << endl;
	if ( a < b )
		cout << "a < b" << endl;
	else
		cout << "a >= b" << endl;
	if ( a > b )
		cout << "a > b" << endl;
	else
		cout << "a <= b" << endl;

	/* Change the values of a & b */
	a = 5;
	b = 20;
	cout << "a = " << a << " b =" << b << endl;
	if ( a <= b )
		cout << "a <= b" << endl;
	if ( b >= a )
		cout << "b >= a" << endl;

	return 0;
}

