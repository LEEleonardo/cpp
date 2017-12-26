// project16.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//typedef char T;

//typedef int T;
//void swapValues(T& var1, T& var2);
//
//void swapValues(T2& var1, T2& var2);
template <class T>
void swapValues(T& var1, T& var2);
void swapValues1(int &var1, int &var2);
void swapValues2(char &var1, char &var2);
int main()
{
	//char a = 'a', b = 'b';

	int a = 3, b = 4;
	cout << "a=" << a << "b=" << b<<endl;
	swapValues(a, b);
	cout << "a=" << a << "b=" << b<<endl;

	char c = 'c', d = 'd';
	cout << "c=" << c << "d=" << d << endl;
	swapValues(c, d);
	cout << "c=" << c << "d=" << d<<endl<<endl;

	int a1 = 3, b1 = 4;
	cout << "a=" << a1 << "b=" << b1 << endl;
	swapValues1(a1, b1);
	cout << "a=" << a1 << "b=" << b1 << endl;

	char c1 = 'c', d1 = 'd';
	cout << "c=" << c1 << "d=" << d1 << endl;
	swapValues2(c1, d1);
	cout << "c=" << c1 << "d=" << d1 << endl << endl;

    return 0;
}

//template <class T>
//void swapValues(T& var1, T& var2) 
//{ 
//	T temp;//	temp = var1;//	var1 = var2;//	var2 = temp; 
//}

template<class T>
void swapValues(T &r1, T &r2)
{
	T temp;
	temp = r1;
	r1 = r2;
	r2 = temp;
}

//void swapValues(T2& var1, T2& var2)
//{
//	T2 temp;
//	temp = var1;
//	var1 = var2;
//	var2 = temp;
//}

void swapValues1(int &var1, int &var2)
{
	int temp;
	temp = var1;
	var1 = var2;
	var2 = temp;
}

void swapValues2(char &var1, char &var2)
{
	char temp;
	temp = var1;
	var1 = var2;
	var2 = temp;
}

