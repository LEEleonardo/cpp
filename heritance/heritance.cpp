nclude "stdafx.h"
#include <iostream>
#include "hourlyemployee.h"
#include "salariedemployee.h"
#include <string>
using namespace std;
using namespace SavitchEmployees;
int main()
{

	Employee k("kim", "m");
	HourlyEmployee aHourlyEmployee("Lim","123-456-789",6500,8);
	SalariedEmployee aSalariedEmployee("Lee","111-222-333",700000);
	Employee *p1;
	p1 = new Employee;
	p1 = &aHourlyEmployee;
	p1->printCheck();
	//aHourlyEmployee.printCheck();
	//aSalariedEmployee.printCheck();
	//k.printCheck();
	//



    return 0;
}


