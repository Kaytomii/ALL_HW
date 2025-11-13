#pragma once
#include <iostream>

class Point
{
private:
	int x;
	int y;

public:
	Point();
	Point(int x1, int y1);

	int getX() const;
	int getY() const;

	void setX(int x1);
	void setY(int y1);

	Point& operator+=(const Point& obj);
	Point& operator+=(int n);
	Point operator+(const Point& obj);
};

std::istream& operator>>(std::istream& in, Point& obj);
std::ostream& operator<<(std::ostream& out, const Point& obj);
