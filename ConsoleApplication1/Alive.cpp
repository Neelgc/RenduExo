#include "Alive.h"

Alive::Alive(float _Maxpv, float _PvActuel) : Maxpv(_Maxpv), PvActuel(_PvActuel){

}
float Alive::GetMaxpv()
{
	return Maxpv;
}

float Alive::GetPvActuel()
{
	return PvActuel;
}

float Alive::GetTakeDmg(float TakeDmg)
{
	PvActuel -= TakeDmg;
	return PvActuel;
}