#pragma once
#ifndef PLAYER_H__
#define PLAYER_H__

#include "entity2.h"
#include "Alive.h"
#include "AMovable.h"
#include "iAttacker.h"

class Player : public entity2, public Alive, public AMovable, public IAttacker {

public:
	void DisplayCreate(float _x, float _y, float _Maxpv, float _directionX, float _directionY);

	virtual void deplacement(float _positionX, float _positionY) override;
	virtual float Attack(float *_ptrPV) override;


	Player(float _x, float _y, float _PvActuel, float _Maxpv, float _vitesse, Vector2 _direction);
};




#endif