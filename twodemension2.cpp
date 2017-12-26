// practicech10.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
int* func();

int main()
{
	//1.delete dynamic pointer
	int *p1 = new int(3);	//이런식으로 초기화도 가능하다.
	int *p2 = new int;
	cout << "p1 : " << *p1 <<endl;
	cout << "p1 :" << p1 << "\np2 : " << p2 << endl;
	delete p1;
	cout << "p1 :" << p1 << "\np2 : " << p2 << endl;
	//delete후 출력시 p1과 p2는 여전히 같은값을 유지하지만 그공간은 이미 반납한상태이다.
	//같은값을 유지하지않는경우가 있는데 이는 ide마다 다르다.

	//2.array & pointer
	int array1[3];
	int *arrayptr;
	arrayptr = array1;
	
	//3.이차원배열 할당및 삭제
	int **p6;
	int nRow;
	cin >> nRow;
	int nColumn;
	cin >> nColumn;
	p6 = new int*[nRow];
	for (int nR = 0; nR < nRow; nR++)
	{
		p6[nR] = new int[nColumn];
	}
	int nCt = 1;

	for (int nR = 0; nR < nRow; nR++)
	{
		for (int nC = 0; nC < nColumn; nC++)
		{
			p6[nR][nC] = nCt++;
		}
	}

	for (int nR = 0; nR < nRow; nR++)
	{
		for (int nC = 0; nC < nColumn; nC++)
		{
			cout << "	" <<p6[nR][nC];
		}
		cout << endl;
	}
	//**중요하다.
	for (int nR = 0; nR < nRow; nR++)
	{
		delete[] p6[nR];
	}
	delete[] p6;

	//4.배열 리턴
	int* m = func();
	cout << endl << m[0] << m[1] << m[2];

	//
	int *a = new int;
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	a[5] = 6;
	cout << "veoctor <<"<<a[0] << a[1] << a[2]<<a[3];
	return 0;
}
//배열 리턴시 int* a()이런식이다!
int* func()
{
	int a[3] = {1,2,3};
	return a;
}


