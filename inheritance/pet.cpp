#include "stdafx.h"
#include "Pet.h"
#include<string>
using namespace std;
Pet::Pet()
{
}


Pet::~Pet()
{
}

void Pet::print() const
{
	cout << "name:" << name << endl;
}

