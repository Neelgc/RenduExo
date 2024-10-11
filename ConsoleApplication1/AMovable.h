#pragma once
#ifndef AMOVABLE_H__
#define AMOVABLE_H__ 
#include "Vector2.h"

class AMovable {

    float vitesse;
    Vector2 direction;

public:

    virtual void setDirection(Vector2 _direction);
    virtual void setVitesse(float _vitesse);
    virtual void deplacement(float _positionX, float _positionY) = 0;


    AMovable(Vector2, float);

};
#endif