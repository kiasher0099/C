/*************************************************************************
	> File Name: pointer.cpp
	> Author: kiasher
	> Mail: kiasher@longcheer.com
	> Created Time: Fri 29 Nov 2019 02:19:28 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
const int MAX = 3;

void showAddress();
void doublePointer();

int main ()
{
	showAddress();
	cout << "------------------------------------" << endl;
	doublePointer();
	return 0;
}

void showAddress ()
{
	int var[MAX] = {10, 100, 200};
	int *ptr;
	
	// The address of array in pointer
	ptr = var;
	for (int i = 0; i < MAX; i++)
	{
		cout << "var[" << i << "] address in memory :";
		cout << ptr << endl;

		cout << "var[" << i << "] values is :";
		cout << *ptr << endl;

		// Move to the next address
		ptr++;
	}
}

void doublePointer ()
{
	int var;
	int *ptr;
	int **pptr;

	var = 123456;

	//Acquire the address of var
	ptr = &var;

	//Acquire the address of ptr
	pptr = &ptr;

	//Use pptr to get the value of var
	cout << "Var is : " << var << endl;
	cout << "*ptr is : " << *ptr << endl;
	cout << "**pptr is : " << **pptr << endl;	
	cout << "----------------------------------" << endl;
	//Check what the addresses are in pointers
	cout << "ptr is : " << ptr << endl;
	cout << "pptr is : " << pptr << endl;
}
