#pragma once
#ifndef ALIVE_H__
#define ALIVE_H__

class Alive {

private:
	float Maxpv;
	float PvActuel;
	float TakeDmg;

public:
	virtual float GetMaxpv();
	virtual float GetPvActuel();
	virtual float GetTakeDmg(float TakeDmg);
	Alive(float, float, float);

};

#endif
