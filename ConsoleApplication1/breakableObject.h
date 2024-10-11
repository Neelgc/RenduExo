#pragma once

#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__
#include "entity2.h"
#include "Alive.h"

class BreakableObject : public entity2, public Alive {

public:
	void DisplayCreate(float _x, float _y, float _PvActuel, float _Maxpv);

	void DisplayBroke(float _PvActuel);


	BreakableObject(float _x, float _y, float _PvAcutel, float _Maxpv);

};
#endif