#include "Vector2.h"
#include <math.h>

Vector2::Vector2():x{0.0f}, y{0.0f} {/*empty*/}

Vector2::Vector2(const float value): x{value}, y{value} {/*empty*/}

Vector2::Vector2(const float aX, const float aY) :x{aX}, y{aY}{/*empty*/}


Vector2 Vector2::operator+(const Vector2 a) const
{
	Vector2 temp;
	temp.x = x + a.x;
	temp.y = y + a.y;

	return temp;
}

Vector2 Vector2::operator-(const Vector2 a) const
{
	Vector2 temp;
	temp.x = x - a.x;
	temp.y = y - a.y;

	return temp;
}

Vector2 Vector2::operator*(const Vector2 a) const
{
	Vector2 temp;
	temp.x = x * a.x;
	temp.y = y * a.y;

	return temp;
}

Vector2 Vector2::operator/(const Vector2 a) const
{
	Vector2 temp;
	temp.x = x / a.x;
	temp.y = y / a.y;

	return temp;
}

Vector2 Vector2::operator+=(const Vector2 a)
{
	*this = *this + a;
	return *this;
}

Vector2 Vector2::operator-=(const Vector2 a)
{
	*this = *this - a;
	return *this;
}

Vector2 Vector2::operator*=(const Vector2 a)
{
	*this = *this * a;
	return *this;
}

Vector2 Vector2::operator/=(const Vector2 a)
{
	*this = *this / a;
	return *this;
}

const float & Vector2::operator[](int index) const
{
	if (index == 0)
		return x;
	return y;
	
}

float & Vector2::operator[](int index)
{
	if (index == 0)
		return x;
	return y;
}

/*
 * Member Functions
 */
void Vector2::SetWithCocosVector(const cocos2d::Vec2 &otherVec2)
{
	x = otherVec2.x;
	y = otherVec2.y;
}

