#include "Shape.h"

#include <iostream>

using namespace std;

Shape::Shape() : innerShape(nullptr) {
	name = "Dot";
}

Shape::Shape(string name, Shape* innerShape) {
	this->name = name;
	this->innerShape = innerShape;
}

Shape::~Shape() {

}

string Shape::getName() {
	return name;
}

void Shape::setName(string name) {
	this->name = name;
}

Shape* Shape::getInnerShape() {
	return innerShape;
}

void Shape::setInnerShape(Shape* innerShape) {
	this->innerShape = innerShape;
}

string Shape::describe() {
	return "a dot";
}