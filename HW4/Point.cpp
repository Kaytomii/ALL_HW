#include "Point.h"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int x1, int y1)
{
	this->x = x1;
	this->y = y1;
}

int Point::getX() const
{
	return this->x;
}

int Point::getY() const
{
	return this->y;
}

void Point::setX(int x1)
{
	this->x = x1;
}

void Point::setY(int y1)
{
	this->y = y1;
}

Point& Point::operator+=(const Point& obj)
{
	this->x += obj.x;
	this->y += obj.y;

	return *this;
}

Point& Point::operator+=(int n)
{
	this->x += n;
	this->y += n;

	return *this;
}

Point Point::operator+(const Point& obj)
{
	return Point(x + obj.x, y + obj.y);
}

std::istream& operator>>(std::istream& in, Point& obj)
{
	int x, y;

	in >> x;
	obj.setX(x);

	in >> y;
	obj.setY(y);

	return in;
}

std::ostream& operator<<(std::ostream& out, const Point& obj)
{
	out << " x: " << obj.getX()
		<< " y: " << obj.getY();

	return out;
}
