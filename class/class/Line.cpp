#include "Line.h"
#include <iostream>

using namespace std;

Line::Line(const Point & p1, Point p2)
{
	cout << "p1��ַ:" << &p1 << endl;
	cout << "p2��ַ:" << &p2 << endl;
	cout << "����Line�Ĺ��캯�� 1" << endl;
	m_p1 = p1;
	m_p2 = p2;
	cout << "����Line�Ĺ��캯�� 2" << endl;
}
Line::~Line()
{

}