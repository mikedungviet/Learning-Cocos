#pragma once
#include "cocos2d.h"

class Vector2
{
public:

	float x;
	float y;


	Vector2();
	Vector2(const float xy);
	Vector2(const float x, const float y);

	Vector2 operator+(const Vector2 a) const;
	Vector2 operator-(const Vector2 a) const;
	Vector2 operator*(const Vector2 a) const;
	Vector2 operator/(const Vector2 a) const;

	Vector2 operator+=(const Vector2 a);
	Vector2 operator-=(const Vector2 a);
	Vector2 operator*=(const Vector2 a);
	Vector2 operator/=(const Vector2 a);

	//Setters
	void SetWithCocosVector(const cocos2d::Vec2 &otherVec2);
	void Set(const float &aX, const float & aY);
	void Set(const Vector2& otherVector2);


	//Getters
	const float& operator[](int index) const;
	float& operator[](int index);

private:

};

