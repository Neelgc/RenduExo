#include <iostream>
#include "mob.h"
#include"Alive.h"
#include "entity2.h"
#include"Vector2.h"

Mob::Mob(float _x, float _y, float _PvActuel, float _Maxpv, Vector2 _direction, float _vitesse): entity2(_x, _y), Alive(_PvActuel, _Maxpv), AMovable(_direction, _vitesse)
{
	//std::cout << "Mob just created at x= " << _x << " and y = " << _y << " with " << _Maxpv << " HP, with direction.x = " << _direction.getX << "and y = " << _direction.getY << std::endl;
}

/*void Mob::DisplayCreate(float _x, float _y, float _Maxpv, float _directionX, float _directionY)
{
	std::cout << "Mob just created at x= " << _x << " and y = " << _y << " with " << _Maxpv
		<< " HP, with direction.x = " << _directionX << "and y = " << "_directionY" << std::endl;
}

*/


void Mob::DisplayDie(float _actualHp) 
{
	if (_actualHp <= 0)
	{
		std::cout << "Mob just die" << std::endl;
	}
	else {
		std::cout << "Mob still alive" << std::endl;
	}
}


void Mob::deplacement(float _positionX, float _positionY){
	std::cout << "Mob move to x = " << _positionX << " and y = " << _positionY << std::endl;
}
