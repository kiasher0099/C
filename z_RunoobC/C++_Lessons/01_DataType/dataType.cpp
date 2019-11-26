#include<iostream>
#include<string>
#include<limits>
using namespace std;

int main()
{
	cout << "type: \t\t" << "*****************size*****************" << endl;
	cout << "bool: \t\t" << "Number of bytes taken: " << sizeof(bool);
	cout << "\tMax: " << (numeric_limits<bool>::max)();
	cout << "\t\tMin: " << (numeric_limits<bool>::min)() << endl;
	cout << "char: \t\t" << "Number of bytes taken: " << sizeof(char);
	cout << "\tMax: " << (numeric_limits<char>::max)();
	cout << "\t\tMin: " << (numeric_limits<char>::min)() << endl;
	cout << "signed char: \t" << "Number of bytes taken: " << sizeof(signed char);
	cout << "\tMax: " << (numeric_limits<signed char>::max)();
	cout << "\t\tMin: " << (numeric_limits<signed char>::min)() << endl;
	cout << "unsigned char: \t" << "Number of bytes taken: " << sizeof(unsigned char);
	cout << "\tMax: " << (numeric_limits<unsigned char>::max)();
	cout << "\t\tMin: " << (numeric_limits<unsigned char>::min)() << endl;
	cout << "wchar_t: \t" << "Number of bytes taken: " << sizeof(wchar_t);
	cout << "\tMax: " << (numeric_limits<wchar_t>::max)();
	cout << "\t\tMin: " << (numeric_limits<wchar_t>::min)() << endl;
	cout << "short: \t\t" << "Number of bytes taken: " << sizeof(short);
	cout << "\tMax: " << (numeric_limits<short>::max)();
	cout << "\t\tMin: " << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t" << "Number of bytes taken: " << sizeof(int);
	cout << "\tMax: " << (numeric_limits<int>::max)();
	cout << "\tMin: " << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t" << "Number of bytes taken: " << sizeof(unsigned);
	cout << "\tMax: " << (numeric_limits<unsigned>::max)();
	cout << "\tMin: " << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t" << "Number of bytes taken: " << sizeof(long);
	cout << "\tMax: " << (numeric_limits<long>::max)();
	cout << "\tMin: " << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t" << "Number of bytes taken: " << sizeof(unsigned long);
	cout << "\tMax: " << (numeric_limits<unsigned long>::max)();
	cout << "\tMin: " << (numeric_limits<unsigned long>::min)() << endl;
	cout << "double: \t" << "Number of bytes taken: " << sizeof(double);
	cout << "\tMax: " << (numeric_limits<double>::max)();
	cout << "\tMin: " << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t" << "Number of bytes taken: " << sizeof(long double);
	cout << "\tMax: " << (numeric_limits<long double>::max)();
	cout << "\tMin: " << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t" << "Number of bytes taken: " << sizeof(float);
	cout << "\tMax: " << (numeric_limits<float>::max)();
	cout << "\tMin: " << (numeric_limits<float>::min)() << endl;
	cout << "size_t: \t" << "Number of bytes taken: " << sizeof(size_t);
	cout << "\tMax: " << (numeric_limits<size_t>::max)();
	cout << "\tMin: " << (numeric_limits<size_t>::min)() << endl;
	cout << "string: \t" << "Number of bytes taken: " << sizeof(string) << endl;
	cout << "***********************************************************" << endl;

	return 0;
}
