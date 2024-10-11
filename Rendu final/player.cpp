#include <iostream>
#include "player.h"



Player::Player(float _x, float _y, float _PvActuel, float _Maxpv, float _vitesse, Vector2 _direction): entity2(_x, _y), Alive(_PvActuel, _Maxpv), AMovable(_direction, _vitesse)
{

}


void Player::DisplayCreate(float _x, float _y, float _Maxpv, float _directionX, float _directionY)
{
	std::cout << "Player just created at x =" << _x << " and y = " << _y << " with " << _Maxpv << " HP with direction x = " << _directionX << " and direction y = " << _directionY << std::endl;
}


void Player::deplacement(float _positionX, float _positionY)
{
	std::cout << "Player moved to x = " << _positionX << " and y = " << _positionY << std::endl;
}

float Player::Attack(float *_ptrHp)
{
	_ptrHp -= 10;
	std::cout << "Player just attacked";
}


