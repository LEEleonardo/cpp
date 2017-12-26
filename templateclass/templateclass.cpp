// templateclass.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "CPair.h";
#include "CPair.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	CPair<int> q1(10);
	cout << q1.Getm1();
    return 0;
}


