#pragma once

#include <iostream>

using namespace std;

class Shape
{
private:
	string name;
	Shape* innerShape;

public:
	Shape();
	Shape(string, Shape*);
	virtual ~Shape();

	string getName();
	void setName(string);

	Shape* getInnerShape();
	void setInnerShape(Shape*);

	virtual string describe();
};

