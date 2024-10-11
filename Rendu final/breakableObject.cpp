#include <iostream>
#include "breakableObject.h"
#include "entity2.h"
#include "Alive.h"


BreakableObject::BreakableObject(float _x, float _y, float _PvActuel, float _Maxpv) : entity2(_x, _y), Alive(_PvActuel, _Maxpv)
{
}

void BreakableObject::DisplayCreate(float _x, float _y, float _PvActuel, float _Maxpv) {
	std::cout << "BreakableObject just created at x = " << _x << " and y = " << _y << " with " << _PvActuel << " / " << _Maxpv << " PV." << std::endl;
}

void BreakableObject::DisplayBroke(float _PvActuel) {
	if (_PvActuel <= 0)
	{
		std::cout << "BreakableObject just broke" << std::endl;
	}
	else {
		std::cout << "BreakableObject still alive" << std::endl;
	}
};
