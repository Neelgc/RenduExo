#pragma once
#ifndef VECTOR2_H__
#define VECTOR2_H__

class Vector2 {
private:
	float x;
	float y;

public:

	float getX();
	float getY();

	void setX(float x);
	void setY(float y);

	Vector2(float, float);
};


#endif 