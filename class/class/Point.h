#pragma once
class Point
{
public:
	Point(int x, int y);
	Point(const Point & other);
	Point();
	~Point();

	int m_x=0;
	int m_y=0;
};

