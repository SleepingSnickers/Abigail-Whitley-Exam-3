#pragma once
#include "Job.h"

#include <iostream>
#include <vector>

using namespace std;

class Mage :
    public Job
{
private:
    vector<string> spellbook;
public:
    Mage();

    void castSpell(string);
    string pickSpell();

    void attack() override;
};

