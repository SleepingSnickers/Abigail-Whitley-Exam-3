#include "Polygon.h"

#include <string>
#include <iostream>

using namespace std;

Polygon::Polygon(Shape* innerShape, int numSides, string name = "Polygon") : Shape(name, innerShape) {
	this->numSides = numSides;
}

int Polygon::getNumSides() {
	return numSides;
}

void Polygon::setNumSides(int numSides) {
	this->numSides = numSides;
}

string Polygon::describe() {
	return "a " + to_string(numSides) + "-sided " + getName() + " surrounding " + getInnerShape()->describe();
}