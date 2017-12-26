// copydeep.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "CDyna.h"
#include <string>
using namespace std;

int main()
{
	CDyna *pDyna, aDyna;
	pDyna = new CDyna;
	pDyna->ShowSchedule(); //여기까지만 하고 출력한다면 생성이된후에 소멸되는것까지 볼 수 있다.
	const int nSize = 3;
	int pSchedule[nSize] = { 1000,1120,3040 };
	pDyna->SetInfo(nSize, pSchedule);
	pDyna->ShowSchedule();
	aDyna = *pDyna;
	aDyna.ShowSchedule();
	cout << "delete pdyna";
	delete pDyna;

	char as[30] = "hello";
	string ass = "hi";
	cin.getline(as,30);
	getline(cin, ass);
	return 0;

}

