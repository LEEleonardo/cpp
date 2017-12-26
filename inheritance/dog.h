#pragma once
#include "Pet.h"

class Dog :
	public Pet
{
public:
	string breed;
	Dog();
	virtual ~Dog();
	virtual void print() const;
};


