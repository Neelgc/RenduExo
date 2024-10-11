#include <iostream>
#include "staticObject.h"

StaticObject::StaticObject(float _x, float _y) : entity2(_x, _y) {
	std::cout << "StaticObject just created at x = " << _x << " and y = " << _y << std::endl;

}


/*void StaticObject::DisplayCreate(float _x, float _y) {
	std::cout << "StaticObject just created at x = " << _x << " and y = " << _y << std::endl;
}
pas utile car ne demande pas de fonction, veux juste affiché le res
*/