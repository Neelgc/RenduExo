#include <iostream>
#include "entity2.h"

//entity2::entity2(Vector2 _position) : position(_position) {  //set la position
//}

entity2::entity2(float _x, float _y) : Position(_x, _y) {
}

Vector2 entity2::Getposition()
{
	return Position;
}

void entity2::setPosition(float _x, float _y)
{
	Position.setX(_x);
	Position.setY(_y);

}

