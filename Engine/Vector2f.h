#pragma once

class Vector2f
{
public:
	//constructors
	Vector2f() = default;
	Vector2f(float in_x, float in_y);
	//get functions
	int getX() const;
	int getY() const;
	//operators
	Vector2f operator+(const Vector2f& vect_in) const;
	Vector2f operator-(const Vector2f& vect_in) const;
	Vector2f operator-(const float float_in) const;
	Vector2f operator*(const Vector2f& vect_in) const;
	Vector2f operator*(const float float_in) const;
	Vector2f operator/(const Vector2f& vect_in) const;
	Vector2f operator/(const float float_in) const;
private:
	float x;
	float y;
};