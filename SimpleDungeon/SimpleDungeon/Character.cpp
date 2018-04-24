#include "Character.h"
#include "Utility.h"

using namespace std;

Character::Character()
{

}

Character::~Character() 
{

}

Character::Character(string name, int hitPointMod, int level, int strength, int constitution, int dexterity,
	long gold, Armor armor, Weapon weapon, Race race)
{
	this->name = name;
	this->hitPointMod = hitPointMod;
	this->level = level;
	this->strength = strength;
	this->constitution = constitution;
	this->dexterity = dexterity;
	this->gold = gold;
	this->armor = armor;
	this->weapon = weapon;
	this->race = race;
	hitPoints = ((level * hitPointMod) + (level * getStatMod(getFullConstitution())))
		+ getItemsHitPointBonus();
}

void Character::heal(int health) 
{
	if (hitPoints + health <= getMaxHitPoints())
		hitPoints += health;
	else
		hitPoints = getMaxHitPoints();
}

string Character::toString() 
{
	return "Name: " + name + "\nLevel: " + to_string(level) + "\nHit Points: " + to_string(getMaxHitPoints()) +
		"\nArmor Class: " + to_string(getDefense()) + "\nStrength: " + to_string(getFullStrength()) +
		"\nConstitution: " + to_string(getFullConstitution()) + "\nDexterity: " + to_string(getFullDexterity()) +
		"\nGold: " + to_string(gold) + "\n\nArmor\n" + armor.toString() +
		"\n\nWeapon\n" + weapon.toString() + "\n";
}

string Character::getStatus()
{
	return "Name: " + name + "\nLevel: " + to_string(level) + "\nHit Points: " + to_string(hitPoints);
}

int Character::getAttack()
{
	return level + getStatMod(strength) + getItemsHitPointBonus();
}

int Character::getDefense()
{
	return 10 + getStatMod(getFullDexterity()) + armor.getDefense() + getFullDefenseBonus();
}

int Character::getMaxHitPoints()
{
	return ((level * hitPointMod) + (level * getStatMod(getFullConstitution())))
		+ getItemsHitPointBonus();
}

int Character::getFullStrength()
{
	return strength + armor.getStrBonus() + weapon.getStrBonus() + race.getStrBonus();
}

int Character::getFullConstitution()
{
	return constitution + armor.getConBonus() + weapon.getConBonus() + race.getConBonus();
}

int Character::getFullDexterity() 
{
	return dexterity + armor.getDexBonus() + weapon.getDexBonus() + race.getDexBonus();
}

int Character::getFullDefenseBonus()
{
	return weapon.getDefenseBonus() + armor.getDefenseBonus() + race.getDefenseBonus();
}

int Character::getFullAttackBonus()
{
	return weapon.getAttackBonus() + armor.getAttackBonus() + race.getAttackBonus();
}

string Character::getName() 
{
	return name;
}

int Character::getLevel()
{
	return level;
}

Armor Character::getArmor()
{
	return armor;
}

Weapon Character::getWeapon()
{
	return weapon;
}

long Character::getGold()
{
	return gold; 
}

int Character::getHitPoints()
{
	return hitPoints;
}

int Character::getStrength()
{
	return strength;
}

int Character::getDexMod()
{
	return dexterity;
}

int Character::getHitPointMod()
{
	return hitPointMod;
}

int Character::getItemsHitPointBonus()
{
	return weapon.getHpBonus() + armor.getHpBonus(); 
}

void Character::takeDamage(int dmg)
{
	hitPoints -= dmg;
}

bool Character::isAlive()
{
	return hitPoints > 0; 
}