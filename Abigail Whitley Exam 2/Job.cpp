#include "Job.h"

#include <iostream>

using namespace std;

Job::Job() {
	name = " ";
}

Job::Job(string name) {
	this->name = name;
}

Job::~Job() {

}

string Job::getName() {
	return name;
}

void Job::setName(string) {
	this->name = name;
}