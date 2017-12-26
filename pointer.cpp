// ch10.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	//p1 p2의 주소공간만 만들어준다.
	int *p1=0, *p2, v1 = 3, v2 = 4;//P1=0은 P1=NULL
	cout << "v1 and v2 data value \n";
	cout << "v1:"<<v1 << endl << "v2:"<<v2 << endl;
	cout << "v1 and v2 address value \n";
	cout << "v1:" << &v1 << endl << "v2:" << &v2 << endl;
	//빌려오기
	p1 = &v1;
	//p2 = &v2; *p1 = *p2;
	cout << p1 << endl; 
	cout << *p1 << endl;
	p2 = new int;
	*p2 = v2;
	cout <<"p2"<< p2 << endl;
	cout << *p2 << endl;
	
	*p1 = *p2;
	cout << *p1 << *p2<<endl;
	cout << &p1 << &p2<<endl;
	p1 = p2;
	cout << *p1 << endl << &p1<<&p2;
	p2 = p1;
	cout << *p1 << endl << &p1 << &p2;
	int a = 10;
	int *b;
	b = new int;
	b = &a;
	cout << "b:" << *b;
	return 0;
}


