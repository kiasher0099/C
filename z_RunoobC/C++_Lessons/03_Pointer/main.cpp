/*************************************************************************
	> File Name: main.cpp
	> Author: kiasher
	> Mail: kiasher@longcheer.com
	> Created Time: Wed 27 Nov 2019 02:59:13 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int var = 20;			//Declaration of actual variable
	int *ip;				//Declaration of pointer variable

	ip = &var;				//Store address of var in pointer variable

	cout << "Value of var variable: ";
	cout << var << endl;

	//Printout stored address in pointer variable
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	//Access the value of the address in the pointer variable
	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	return 0;
}
