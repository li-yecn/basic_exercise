#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) :
	m_x(x),
	m_y(y)
{
	cout << "����Point���캯��" << endl;
}

Point::~Point()
{
	cout << "����Point��������" << endl;
}

Point::Point(const Point & other):
	m_x(other.m_x),
	m_y(other.m_y)
{
	cout<<"����Point���ƹ��캯��"<<endl;
}

Point::Point()
{

}
