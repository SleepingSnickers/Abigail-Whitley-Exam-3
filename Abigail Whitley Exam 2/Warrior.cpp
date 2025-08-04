#include "Warrior.h"

#include <iostream>

using namespace std;

Warrior::Warrior() {
	setName("Warrior");
	weapon = "Sword";
}

void Warrior::setWeapon(string weapon) {
	this->weapon = weapon;
}

string Warrior::getWeapon() {
	return weapon;
}

void Warrior::attack() {
	cout << ", the Warrior, swings their " << weapon << endl;
}