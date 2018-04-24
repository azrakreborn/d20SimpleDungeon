#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item
{
protected:
	int damage;
	bool isMagic;
	int strBonus;
	int dexBonus;
	int conBonus;
	int defenseBonus;
	int attackBonus;
	int hpBonus;
	std::string damageType;
public:
	Weapon();
	Weapon(std::string, int, std::string, long);
	~Weapon();
	int getDamage();
	bool isWeaponMagic();
	std::string getDamageType();
	int getStrBonus();
	int getDexBonus();
	int getConBonus();
	int getDefenseBonus();
	int getAttackBonus();
	int getHpBonus();
	std::string toString();
};

#endif // !WEAPON_H
