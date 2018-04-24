#include "Potion.h"

using namespace std;

Potion::Potion() {

}

Potion::~Potion() {

}

Potion::Potion(string name, int amountHealed, long value) : Item(name, value) {
	this->amountHealed = amountHealed;
	type = "Potion";
}

int Potion::getAmountHealed()
{
	return amountHealed;
}

string Potion::toString() {
	return "Name: " + name + "\nAmount Healed: " + to_string(amountHealed) + "\n";
}