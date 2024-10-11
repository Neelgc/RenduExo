#pragma once
#ifndef ENTITY2_H__
#define ENTITY2_H__
#include"Vector2.h"

class entity2 {

public:

	Vector2 Position;
	entity2(float, float);
	virtual Vector2 Getposition();
	virtual void setPosition(float x, float y);

};
#endif