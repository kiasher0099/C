/*************************************************************************
	> File Name: main.cpp
	> Author: kiasher
	> Mail: kiasher@longcheer.com
	> Created Time: Mon 02 Dec 2019 09:30:33 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int i;
	double d;

	// Declare reference variable
	int &r = i;
	double &s = d;

	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;

	return 0;
}
