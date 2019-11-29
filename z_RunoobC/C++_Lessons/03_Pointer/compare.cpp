/*************************************************************************
	> File Name: compare.cpp
	> Author: kiasher
	> Mail: kiasher@longcheer.com
	> Created Time: Thu 28 Nov 2019 03:01:07 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
const int MAX = 3;

int main()
{
	int var[MAX] = {10, 100, 200};
	int *ptr;

	//The address of first element in pointer
	ptr = var;
	int i = 0;
	while( ptr <= &var[MAX-1] )
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;

		ptr++;
		i++;
	}
	return 0;
}
