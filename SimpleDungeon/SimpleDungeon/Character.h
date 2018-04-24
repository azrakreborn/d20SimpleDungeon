#ifndef CHARACTER_H
#define CHARACTER_H

#include "Armor.h"
#include "Weapon.h"
#include "Race.h"

class Character {
protected:
	std::string name;
	int level;
	Armor armor;
	Weapon weapon;
	long gold;
	int hitPoints;
	int strength;
	int constitution;
	int dexterity;
	int hitPointMod;
	Race race;
	//Quest quest;
	//bool onQuest;
public:
	Character();
	~Character();
	Character(std::string, int, int, int, int, int, long, Armor, Weapon, Race);
	std::string getName();
	int getLevel();
	Armor getArmor();
	Weapon getWeapon();
	long getGold();
	int getHitPoints();
	int getStrength();
	int getDexMod();
	int getHitPointMod();
	int getItemsHitPointBonus();
	void takeDamage(int dmg);
	bool isAlive();
	void heal(int);
	int getAttack();
	int getDefense();
	int getMaxHitPoints();
	int getFullDefenseBonus();
	int getFullAttackBonus();
	int getFullStrength();
	int getFullConstitution();
	int getFullDexterity();
	std::string getStatus();
	std::string toString();
};

#endif // !CHARACTER_H
