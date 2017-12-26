#include "stdafx.h"
#include "Dog.h"
#include<string>
using namespace std;
Dog::Dog()
{
}


Dog::~Dog()
{
}

void Dog::print() const
{
	cout << "name: " << name << endl;
	cout << "breed: " << breed << endl;
}


