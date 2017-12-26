#pragma once
#include <iostream>
using namespace std;
class Pet
{
public:
	Pet();
	virtual ~Pet();
public:
	virtual void print() const;
	string name;

};


