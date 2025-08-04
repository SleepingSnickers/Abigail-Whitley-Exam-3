#pragma once
#include "Job.h"

#include <iostream>

using namespace std;

class Warrior :
    public Job
{
private:
    string weapon;

public:
    Warrior();

    void setWeapon(string);
    string getWeapon();

    void attack() override;
};

