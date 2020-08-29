#pragma once
#include "Point.h"
class Line
{
public:
	Line(const Point & p1, Point p2);
	~Line();
	Point m_p1;
	Point m_p2;
};

