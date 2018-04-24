#include "MagicWeapon.h"

using namespace std;

MagicWeapon::MagicWeapon() {
	name = "";
	value = 0;
}

MagicWeapon::MagicWeapon(string name, int damage, string type, long value, int strBonus, int conBonus, int dexBonus,
	int defenseBonus, int attackBonus, int hpBonus) : Weapon(name, damage, type, value) {
	this->strBonus = strBonus;
	this->dexBonus = dexBonus;
	this->conBonus = conBonus;
	this->defenseBonus = defenseBonus;
	this->attackBonus = attackBonus;
	this->hpBonus = hpBonus;
	isMagic = true;
}

MagicWeapon::~MagicWeapon() {

}