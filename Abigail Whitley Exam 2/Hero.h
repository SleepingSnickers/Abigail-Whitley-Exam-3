#pragma once
#include "Job.h"

#include <iostream>
#include <string>

using namespace std;

class Hero
{
private:
	string name;
	Job* job;

public:
	Hero();
	Hero(string, Job*);

	string getName();
	void setName(string);

	Job* getJob();
	void setJob(Job*);

	void act();
};

