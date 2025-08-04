#pragma once
#include "Shape.h"

#include <iostream>
#include <string>

using namespace std;


class Circle :
    public Shape
{
public:
    Circle(Shape*);

    string describe() override;
};

