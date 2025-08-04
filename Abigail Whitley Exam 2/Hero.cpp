#include "Hero.h"

#include <iostream>
#include <string>

using namespace std;

Hero::Hero() : job(nullptr) {
	name = " ";
}

Hero::Hero(string name, Job* job) {
	this->name = name;
	this->job = job;
}

string Hero::getName() {
	return name;
}

void Hero::setName(string name) {
	this->name = name;
}

Job* Hero::getJob() {
	return job;
}

void Hero::setJob(Job* job) {
	this->job = job;
}

void Hero::act() {
	cout << name;
	job->attack();
}