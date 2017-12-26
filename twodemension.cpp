// ponter.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//int *p3, *p4;
	//p3 = new int;
	//p4 = new int;
	//cout << "p3 :" << p3 << endl << "p4:" << p4 << endl << endl;
	//*p3 = 7; *p4 = 8;
	//cout << "p3:" << *p3 << endl << "p4:" << *p4 << endl << endl;
	//p3 = p4;
	//cout << "p3:" << p3 << endl << "p4:" << p4 << endl << endl;
	//delete p4; //delete p4; // p3=p4를 했기 떄문에 없는것을 다시 지운것이 되어 죽어버린다.
	//cout << "p3:" << p3 << endl << "p4:" << p4 << endl << endl;
	////	IntArrayPtr *m = new IntArrayPtr[3];


	//int *p1, *p2;
	//p1 = new int;
	//p2 = new int;
	//cout <<"print address"<< p1 << endl << p2 << endl << endl;
	//p1 = p2;
	//cout << "print address p1:" << p1 << endl<<"p2:" << p2 << endl << endl;
	//delete p1;
	//cout << "print address p1:" << p1 << endl << "p2:" << p2 << endl << endl;

	int array1[3];
	int* arrayptr;
	//array1 = arrayptr;안되지만
	arrayptr = array1;//이건 가능하다.

	//p1과 p2가 가리키는 주소를 없애버린다. 주소는 남아 있지만 그값이 없어짐을 예상
	//cout << "each value" << *p1 << endl << *p2 << endl << endl;



	//int *p5, **p6;  
	//int nSize = 3; //p5가 3행 임을 알린다.
	//p5 = new int[nSize]; //p5를 동적으로 3개의 배열을 할당
	//int nCnt = 1;
	//for (int nIndex = 0; nIndex < nSize; nIndex++)
	//{
	//	cout << p5[nIndex] << endl;   //쓰레기 값이 들어있음
	//}
	//int nSizeRow = 3; int nSizeCol = 4;	
	//p6 = new int *[nSizeRow];	//p6는 3행의 이차원 배열임을 알린다.
	//for (int nR = 0; nR < nSizeRow; nR++)
	//{
	//	p6[nR] = new int[nSizeCol]; //각행이 4열을 갖고 있음을 알린다.
	//}
	//for (int nR = 0; nR < nSizeRow; nR++)
	//{
	//	for (int nC = 0; nC < nSizeCol; nC++)
	//	{
	//		p6[nR][nC] = nCnt++; //안에 숫자를 넣어준다.
	//	}
	//}
	//for (int nR = 0; nR < nSizeRow; nR++)
	//{
	//	for (int nC = 0; nC < nSizeCol; nC++)
	//	{
	//	cout <<	p6[nR][nC] <<" "; //숫자를 출력한다.
	//	}
	//	cout << endl;
	//}
	//for (int nR = 0; nR < nSizeRow; nR++)
	//{
	//	delete[] p6[nR]; //동적 배열을 삭제시켜 준다.
	//}
	//delete[] p6;
	//int *p3;
	//int a;
	//cin >> a;
	//p3 = new int[a];
	//for (int i = 0; i<a; i++)
	//{
	//	p3[i] = i;
	//}

	//for (int i = 0; i<a; i++)
	//{
	//	cout << p3[i] << endl;
	//}


	//int **p6;
	//int nSizeRow = 3;
	//int nSizeCol = 4;
	//p6 = new int *[nSizeRow];
	//int nCt = 1;
	//for (int nR = 0; nR<nSizeRow; nR++)
	//{
	//	p6[nR] = new int[nSizeCol];
	//}
	//for (int nR = 0; nR<nSizeRow; nR++)
	//{
	//	for (int nC = 0; nC<nSizeCol; nC++)
	//	{
	//		p6[nR][nC] = nCt++;
	//	}
	//}
	//for (int nR = 0; nR<nSizeRow; nR++)
	//{
	//	for (int nC = 0; nC<nSizeCol; nC++)
	//	{
	//		cout << p6[nR][nC]<<"	";
	//	}
	//	cout << endl;
	//}
	//for (int nR = 0; nR<nSizeRow; nR++)
	//{
	//	delete[] p6[nR];
	//}
	//delete[] p6;

	int **p2;
	int nR;
	int nC;
	cin >> nR;
	cin.ignore(30, '\n');
	cin >> nC;
	p2 = new int*[nR];
	for (int i = 0; i<nR; i++)
	{
		p2[i] = new int[nC];
	}
	int n = 1;
	for (int i = 0; i<nR; i++)
	{

		for (int ii = 0; ii<nC; ii++)
		{
			p2[i][ii] = n;
			n++;
		}
	}

	for (int i = 0; i<nR; i++)
	{

		for (int ii = 0; ii<nC; ii++)
		{
			cout << p2[i][ii] << "	";

		}
		cout << endl;
	}

	for (int i = 0; i<nR; i++)
	{
		delete[] p2[i];
	}
	delete p2;


		return 0;
}


