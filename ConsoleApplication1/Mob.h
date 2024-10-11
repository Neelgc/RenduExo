#pragma once
#ifndef MOB_H__
#define MOB_H__

#include "entity2.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public entity2, public Alive, public AMovable {

public:
	//void DisplayCreate(float _x, float _y, float _Maxpv, float _directionX, float _directionY);

	void DisplayDie(float _PvActuel);

	virtual void deplacement(float _positionX, float _positionY) override;

	Mob(float _x, float _y, float _PvActuel, float _Maxpv, Vector2 _direction, float _vitesse);

	
};



#endif