#include "Mage.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

Mage::Mage() {
	setName("Mage");
	spellbook = { "Grease", "Fireball", "Eldritch Blast" };
}

void Mage::castSpell(string spell) {
	cout << "Casts a " << spell << endl;
}

string Mage::pickSpell() {
	return spellbook[rand() % spellbook.size()];
}

void Mage::attack() {
	string spell = pickSpell();
	cout << ", the Mage, ";
	castSpell(spell);
}
