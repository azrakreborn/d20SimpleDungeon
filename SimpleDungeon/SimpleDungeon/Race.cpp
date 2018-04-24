#include "Race.h"

using namespace std;

Race::Race() 
{

}

Race::~Race() 
{

}

string Race::getName()
{
	return name;
}

int Race::getStrBonus()
{
	return strBonus;
}

int Race::getDexBonus()
{
	return dexBonus; 
}

int Race::getConBonus() 
{
	return conBonus;
}

int Race::getDefenseBonus() 
{
	return defenseBonus; 
}

int Race::getAttackBonus() 
{
	return attackBonus; 
}