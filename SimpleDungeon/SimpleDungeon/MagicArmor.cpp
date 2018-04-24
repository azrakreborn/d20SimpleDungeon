#include "MagicArmor.h"

using namespace std;

MagicArmor::MagicArmor() 
{
	name = "NULL";
	value = 0;
}

MagicArmor::MagicArmor(string name, int defense, string type, long value, int strBonus, int conBonus, int dexBonus,
	int defenseBonus, int attackBonus, int hpBonus) : Armor(name, defense, type, value) 
{
	this->strBonus = strBonus;
	this->dexBonus = dexBonus;
	this->conBonus = conBonus;
	this->defenseBonus = defenseBonus;
	this->attackBonus = attackBonus;
	this->hpBonus = hpBonus;
	isMagic = true;
}

MagicArmor::~MagicArmor()
{

}