#include "Armor.h"

using namespace std;

// Constructors / destructor
Armor::Armor(string name, int defense, string type, long value) : Item(name, value)
{
	this->defense = defense;
	armorType = type;
	isMagic = false;
	strBonus = 0;
	dexBonus = 0;
	conBonus = 0;
	defenseBonus = 0;
	attackBonus = 0;
	hpBonus = 0;
	type = "Armor";
}

Armor::Armor()
{
	name = "";
	this->defense = 0;
	armorType = "NULL";
	isMagic = false;
	strBonus = 0;
	dexBonus = 0;
	conBonus = 0;
	defenseBonus = 0;
	attackBonus = 0;
	hpBonus = 0;
	type = "NULL";
}

Armor::~Armor() 
{

}

// Member functions

string Armor::getArmorType()
{
	return armorType;
}

int Armor::getDefense()
{
	return defense;
}

int Armor::getAttackBonus()
{
	return attackBonus;
}

int Armor::getConBonus()
{
	return conBonus;
}

int Armor::getDefenseBonus()
{
	return defenseBonus;
}

int Armor::getDexBonus()
{
	return dexBonus;
}

int Armor::getHpBonus()
{
	return hpBonus;
}

int Armor::getStrBonus()
{
	return strBonus;
}

bool Armor::isArmorMagic()
{
	return isArmorMagic;
}

string Armor::toString() 
{
	return "Name: " + name + "\nDefense: " + to_string(defense) +
		"\nType: " + armorType + "\n";
}