#include "Circle.h"

#include <iostream>

using namespace std;

Circle::Circle(Shape* innerShape) : Shape("Circle", innerShape) {
	
}

string Circle::describe() {
	return "a perfect circle surrounding a " + getInnerShape()->describe();
}