#pragma once
#include "Shape.h"

#include <iostream>

using namespace std;


class Polygon :
    public Shape
{
private:
    int numSides;

public:
    Polygon(Shape*, int, string);

    int getNumSides();
    void setNumSides(int);

    string describe() override;
};

