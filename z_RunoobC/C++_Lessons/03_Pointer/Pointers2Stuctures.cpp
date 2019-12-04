/*************************************************************************
	> File Name: Pointers2Stuctures.cpp
	> Author: kiasher
	> Mail: kiasher@longcheer.com
	> Created Time: Mon 02 Dec 2019 10:59:22 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

void printBook (struct Books *book);

struct Books
{
	char title[50];
	char author[50];
	char subject[50];
	int book_id;
};

void printBook( struct Books *book )
{
	cout << "Book Title: " << book -> title << endl;
	cout << "Book Author: " << book -> author << endl;
	cout << "Book Type: " << book -> subject << endl;
	cout << "Book ID: " << book -> book_id << endl;
}
int main()
{
	Books Book1;	// Define the structive variable of Book1 
	Books Book2;	//  Define the structive variable of Book2
	
	// Book1
	strcpy( Book1.title, "C++ Lessons");
	strcpy( Book1.author, "Runoob");
	strcpy( Book1.subject, "Programming Language");
	Book1.book_id = 10001;

	// Book2
	strcpy( Book2.title, "CSS Lessons");
	strcpy( Book2.author, "Runoob");
	strcpy( Book2.subject, "Front-side Tech");
	Book2.book_id = 10002;

	// Printout the info of Book1 through passing the address info of Book1 (Book2 same)
	printBook( &Book1 );
	printBook( &Book2 );

	return 0;
}

