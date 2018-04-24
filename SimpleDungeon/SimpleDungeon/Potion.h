#ifndef POTION_H
#define POTION_H

#include "Item.h"

class Potion : public Item
{
protected:
	int amountHealed;
public:
	Potion(std::string, int, long);
	Potion();
	~Potion();
	int getAmountHealed();
	std::string toString();
};

#endif // !POTION_H
