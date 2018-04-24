#include "Weapon.h"

using namespace std;

Weapon::Weapon() 
{
	name = "";
	value = 0;
}

Weapon::Weapon(string name, int damage, string type, long value) : Item(name, value)
{
	this->damage = damage;
	damageType = type;
	isMagic = false;
	strBonus = 0;
	dexBonus = 0;
	conBonus = 0;
	defenseBonus = 0;
	attackBonus = 0;
	hpBonus = 0;
	this->type = "Weapon";
}

Weapon::~Weapon() 
{

}

int Weapon::getDamage()
{
	return damage;
}

bool Weapon::isWeaponMagic()
{
	return isWeaponMagic;
}

std::string Weapon::getDamageType()
{
	return damageType;
}

int Weapon::getStrBonus()
{
	return strBonus;
}

int Weapon::getDexBonus()
{
	return dexBonus; 
}

int Weapon::getConBonus() 
{ 
	return conBonus; 
}

int Weapon::getDefenseBonus() 
{
	return defenseBonus;
}

int Weapon::getAttackBonus() 
{
	return attackBonus; 
}

int Weapon::getHpBonus()
{
	return hpBonus; 
}

string Weapon::toString()
{
	return "Name: " + name + "\nDamage: " + to_string(damage) +
		"\nType: " + damageType + "\n";
}