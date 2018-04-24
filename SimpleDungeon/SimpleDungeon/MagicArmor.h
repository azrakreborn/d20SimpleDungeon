#ifndef MAGICARMOR_H
#define MAGICARMOR_H

#include "Armor.h"

class MagicArmor : public Armor 
{
public:
	MagicArmor();
	MagicArmor(std::string, int, std::string, long, int, int, int, int, int, int);
	~MagicArmor();
};

#endif // !MAGICARMOR_H