#include <iostream>
using namespace std;

int main()
{
	int a = 21;
	int b = 10;
	int c;
	cout << "****** a = 21  b = 10 ******" << endl; 
	c = a + b;
	cout << "c = a + b ; c = " << c << endl; 
	c = a - b;
	cout << "c = a - b ; c = " << c << endl; 
	c = a * b;
	cout << "c = a * b ; c = " << c << endl; 
	c = a / b;
	cout << "c = a / b ; c = " << c << endl; 
	c = a % b;
	cout << "c = a \% b ; c = " << c << endl; 

	int d = 10;
	cout << "****** Test ++ and -- ******" << endl;
	c = d++;
	cout << "c = d++ ; c = " << c << " d = " << d << endl;

	d = 10;
	c = d--;
	cout << "c = d-- ; c = " << c << " d = " << d << endl;

	return 0;




}
