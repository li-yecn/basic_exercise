#include "Line.h"
#include <iostream>

using namespace std;

Line::Line(const Point & p1, Point p2)
{
	cout << "p1地址:" << &p1 << endl;
	cout << "p2地址:" << &p2 << endl;
	cout << "这是Line的构造函数 1" << endl;
	m_p1 = p1;
	m_p2 = p2;
	cout << "这是Line的构造函数 2" << endl;
}
Line::~Line()
{

}