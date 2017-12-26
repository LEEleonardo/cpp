// HW3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "CFigure.h"
#include <iostream>
#include "CRectangle.h"
#include "COval.h"//INCLUDE 할때 보통 헤더파일에서는 아무것도 불러오지 않으며 CPP 에서 모두가져오니 MAIN이 있는 CPP에서 전부 가져오도록 하자.
using namespace Figure;
using namespace std;

void prob1();
void prob2();
void prob3();
int main()
{
	prob1();
	prob2();
	prob3();
    return 0;
}
void prob1()
{
	CRectangle a(250,250,0,10,10);
	double a1, a2, a3, a4, a5, a6, a7, a8 = 0;
	a.GetCorners(a1, a2, a3, a4, a5, a6, a7, a8);
	cout << "<problem1>"<<endl<<endl<<"center:(250,250)\tx_width:10\ty_width:10\tshift angle:0" << endl;
	cout <<"Corner:"<<endl<< "(" << a1 << "," << a2 << ")\t" << "(" << a3 << "," << a4 << ")\n" <<endl<< "(" << a7 << "," << a8 << ")\t" << "(" << a5 << "," << a6 << ")\t";
}

void prob2()
{
	cout <<endl<<endl<< "<problem2>";
	CRectangle recTest(210, 210, 0, 10, 10);
	recTest.ComputeArea();
	cout << endl;
	COval ovalTest(220, 220, 45, 20, 20);
	ovalTest.ComputeArea();
}

void prob3()
{
	cout << endl << endl << "<problem3>";
	cout << endl << endl << "problem3-part1"<<endl<<endl;
	CRectangle recTest(210, 210, 0, 10, 10);
	COval ovalTest(220, 220, 60, 20, 20);
	CFigure prob3FigArray[5];
	prob3FigArray[0] = recTest;
	prob3FigArray[1] = ovalTest;
	{
	for (int i = 0; i < 2; i++)
		prob3FigArray[i].Draw();
	}
	cout << endl << endl << "problem3-part2" << endl<<endl;
	CFigure* prob3FigArray2[5];
	prob3FigArray2[0] = &recTest;
	prob3FigArray2[1] = &ovalTest;
	for (int i = 0; i < 2; i++)
	{
		prob3FigArray2[i]->Draw();
	}
	cout << endl << "problem3-part3" << endl<<endl;
	for (int i = 0; i < 2; i++)
	{
		prob3FigArray2[i]->Centering();
	}
}
