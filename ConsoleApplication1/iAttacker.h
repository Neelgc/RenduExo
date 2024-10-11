#pragma once

#ifndef IATTACKER_H__
#define IATTACKER_H__

class IAttacker {
private:

protected:

public:
	virtual float Attack(float *_ptrHp) = 0;
};


#endif