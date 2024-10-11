#include "Alive.h"

Alive::Alive(float _Maxpv, float _PvActuel, float _TakeDmg) : Maxpv(_Maxpv), PvActuel(_PvActuel), TakeDmg(_TakeDmg) {

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