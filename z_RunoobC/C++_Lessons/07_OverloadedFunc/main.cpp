/*************************************************************************
	> File Name: main.cpp
	> Author: kiasher
	> Mail: kiasher@sina.com
	> Created Time: Mon 02 Dec 2019 05:36:42 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class printData
{
	public:
		void print(int i) {
			cout << "Integer is : " << i << endl;
		}
		void print(double d) {
			cout << "Double is : " << d << endl;
		}
		void print(char c[]) {
			cout << "Array is : " << c << endl;
		}
};

int main()
{
	printData pd;
	pd.print(5);
	pd.print(3.14159265);
	char c[] = "Merry Christmas";
	pd.print(c);

	return 0;
}
