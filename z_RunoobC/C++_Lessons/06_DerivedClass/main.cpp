/*************************************************************************
	> File Name: main.cpp
	> Author: kiasher
	> Mail: kiasher@sina.com
	> Created Time: Mon 02 Dec 2019 04:31:17 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

// Basic Class
class Shape
{
	public:
		void setWidth(int w)
		{
			width = w;
		}
		void setHeight(int h)
		{
			height = h;
		}
	protected:
		int width;
		int height;
};

// Derived Class
class Rectangle: public Shape
{
	public:
		int getArea()
		{
			return (width * height);
		}
};

int main(void)
{
	Rectangle Rect;

	Rect.setWidth(5);
	Rect.setHeight(7);

	cout << "Total area: " << Rect.getArea() << endl;

	return 0;
}
