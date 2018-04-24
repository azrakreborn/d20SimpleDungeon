#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
protected:
	std::string name;
	std::string type;
	long value;
public:
	Item();
	Item(std::string, long);
	~Item();
	std::string getName();
	std::string getType();
	long getValue();
	std::string toString();
};

#endif // !ITEM_H
