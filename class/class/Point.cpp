#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) :
	m_x(x),
	m_y(y)
{
	cout << "这是Point构造函数" << endl;
}

Point::~Point()
{
	cout << "这是Point析构函数" << endl;
}

Point::Point(const Point & other):
	m_x(other.m_x),
	m_y(other.m_y)
{
	cout<<"这是Point复制构造函数"<<endl;
}

Point::Point()
{

}
