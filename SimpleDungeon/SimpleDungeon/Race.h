#ifndef RACE_H
#define RACE_H

#include <string>

class Race 
{
protected:
	std::string name;
	int strBonus;
	int dexBonus;
	int conBonus;
	int defenseBonus;
	int attackBonus;
public:
	Race();
	~Race();
	std::string getName();
	int getStrBonus();
	int getDexBonus();
	int getConBonus();
	int getDefenseBonus();
	int getAttackBonus();
};

#endif // !RACE_H
