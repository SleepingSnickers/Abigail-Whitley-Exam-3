#include "Job.h"
#include "Mage.h"
#include "Warrior.h"
#include "Hero.h"

#include "Shape.h"
#include "Circle.h"
#include "Polygon.h"

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));

	//Problem 1
	//Mage* myMage = new Mage();
	//Warrior* myWarrior = new Warrior();

	//Hero heroMage("Cade", myMage);
	//Hero heroWarrior("Johnathan", myWarrior);

	//heroMage.act();
	//heroWarrior.act();

	//delete myMage;
	//delete myWarrior;

	//Problem 2
	Shape* dot1 = new Shape();
	Shape* circle1 = new Circle(dot1);
	Shape* circle2 = new Circle(circle1);
	Shape* square1 = new Polygon(circle2, 4, "Square");

	Shape* dot2 = new Shape();
	Shape* circle3 = new Circle(dot2);
	Shape* triangle = new Polygon(circle3, 3, "Triangle");
	Shape* square2 = new Polygon(triangle, 4, "Square");
	Shape* pentagon = new Polygon(square2, 5, "Pentagon");

	cout << "Shape 1: " << square1->describe() << endl;
	cout << "Shape 2: " << pentagon->describe() << endl;

	delete dot1;
	delete circle1;
	delete circle2;
	delete square1;
	delete dot2;
	delete circle3;
	delete triangle;
	delete square2;
	delete pentagon;

	return 0;
}