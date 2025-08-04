#pragma once
#include <iostream>

using namespace std;

class Job
{
private:
	string name;

public:
	Job();
	Job(string);
	virtual ~Job();

	virtual void attack() = 0;

	string getName();
	void setName(string);
};

