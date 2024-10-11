#include "Vector2.h"
#include<iostream>

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) { 
}
float Vector2::getX() {
	return x;
}
float Vector2::getY() {
	return y;
}
void Vector2::setX(float _x) {
	x = _x;
}
void Vector2::setY(float _y) {
	y = _y;
}