#include <iostream>
using namespace std;

int main()
{
	int a = 5, b = 20, c;
	cout << "a = 5, b = 20" << endl;
	if ( a && b)
		cout << " a && b --> True" << endl;
	if ( a || b)
		cout << " a || b --> True" << endl;

	/* Change a & b */
	a = 0;
	b = 10;
	cout << "a = 0, b = 10" << endl;
	if ( a && b)
		cout << " a && b --> True" << endl;
	else
		cout << " a && b --> False" << endl;
	if ( !(a && b))
		cout << " !(a && b) --> True" << endl;
	
	return 0;
}
