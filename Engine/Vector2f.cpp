#include "Vector2f.h"

Vector2f::Vector2f(float in_x, float in_y)
	:
	x(in_x),
	y(in_y)
{
}

int Vector2f::getX() const
{
	return (int)x;
}

int Vector2f::getY() const
{
	return (int)y;
}

Vector2f Vector2f::operator+(const Vector2f& vect_in) const
{
	return Vector2f(x + vect_in.x, y + vect_in.y);
}

Vector2f Vector2f::operator*(const Vector2f& vect_in) const
{
	return Vector2f(x*vect_in.x, y*vect_in.y);
}

Vector2f Vector2f::operator*(const float float_in) const
{
	return Vector2f(x*float_in, y*float_in);
}
