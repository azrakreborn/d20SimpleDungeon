#include "Item.h"

using namespace std;

// Constructors / Destructor

Item::Item()
{
	this->name = "";
	this->type = "NULL";
	this->value = 0;
}

Item::Item(string name, long value)
{
	this->name = name;
	this->type = "Item";
	this->value = value;
}

Item::~Item() 
{

}

// Member functions
string Item::getName()
{
	return name;
}

string Item::getType()
{
	return type;
}

long Item::getValue()
{
	return value;
}

string Item::toString() 
{
	return "Name: " + name + "\nValue: " + to_string(value) + "\n\n";
}