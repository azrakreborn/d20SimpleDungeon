#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"

class Armor : public Item 
{
protected:
	int defense;
	bool isMagic;
	std::string armorType;
	int strBonus;
	int dexBonus;
	int conBonus;
	int defenseBonus;
	int attackBonus;
	int hpBonus;
public:
	Armor();
	Armor(std::string, int, std::string, long);
	~Armor();
	int getDefense();
	bool isArmorMagic();
	std::string getArmorType();
	int getStrBonus();
	int getDexBonus();
	int getConBonus();
	int getDefenseBonus();
	int getAttackBonus();
	int getHpBonus();
	std::string toString();
};

#endif // !ARMOR_H
