#ifndef MAGICWEAPON_H
#define MAGICWEAPON_H

#include "Weapon.h"

class MagicWeapon : public Weapon 
{
public:
	MagicWeapon();
	MagicWeapon(std::string, int, std::string, long, int, int, int, int, int, int);
	~MagicWeapon();
};

#endif // !MAGICWEAPON_H