// 1107string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#include <cstring>
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	char chString1[30] = "hello", chString2[30];
	char chString3[30]="hello";
	if (strcmp(chString1, chString3)==0)
	{
		cout << "same";
	}
	strcat_s(chString1, chString3);
	cout << chString1;
	cin >> chString2>>chString1;
	cout << chString2<< chString1;
	cin.ignore(80, '\n');
	cin.getline(chString2, 80);
	cout << chString2;
	return 0;
}
