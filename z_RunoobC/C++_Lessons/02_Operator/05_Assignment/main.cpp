#include <iostream>
using namespace std;

int main()
{
	int a = 21;
	int c;
	cout << "****** a = 21 ******" << endl; 
	c = a;
	cout << "c = a, c =  " << c << endl; 
	c += a;
	cout << "c += a, c = " << c << endl; 
	c -= a;
	cout << "c -= a, c =  " << c << endl; 
	c *= a;
	cout << "c *= a, c = " << c << endl; 
	c /= a;
	cout << "c /= a, c = " << c << endl; 

	c = 200;
	c %= a;
	cout << "c = 200" << "\tc %= " << c << endl;

	c <<= 2;
	cout << "c <<= 2, c = " << c << endl;

	c >>= 2;
	cout << "c >>= 2, c = " << c << endl;

	c &= 2;
	cout << "c &= 2, c = " << c << endl;

	c |= 2;
	cout << "c |= 2, c = " << c << endl;

	c ^= 2;
	cout << "c ^= 2, c = " << c << endl;

	return 0;
}
