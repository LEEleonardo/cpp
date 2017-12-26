#include "stdafx.h"
#include <iostream>
#include <fstream>
//#include <iomanip>
using namespace std;
//int main()
//{
//	ifstream inStream;	//1/객체생성
//	ofstream outStream;	//1.객체 생성
//	inStream.open("infile.txt"); //2.객체 연동(infile.txt라는 파일과의 연동을 진행함)
//	if (inStream.fail())//instream이라는 파일이 없을때의 결과를 정의
//	{
//		cout << "File doesnt open";
//		exit(0);
//	}
//	outStream.open("outfile.txt");	//outstream.즉 뭔가쓰거나 만들파일로 outfile을 정의하여준다.
//	int *pnData;
//	int nSizeOfArray = 0;
//	int nIndex = 0;
//	int nDummy;
//	while (!inStream.eof()) //읽어들이는것이 끝날때까지 숫자열 단위로 다음과같은 작업을 반복하여준다.
//	{
//		inStream >> nDummy;
//		nSizeOfArray++;
//	}
//	inStream.seekg(inStream.beg); //스트림의 시작으로 다시 돌아가자
//	pnData = new int[nSizeOfArray];
//	while (!inStream.eof())
//	{
//		inStream >> pnData[nIndex];
//		nIndex++;
//	}
//	int nSum = 0;
//	for (nIndex = 0; nIndex < nSizeOfArray; nIndex++)
//	{
//		nSum += pnData[nIndex]; //모든 항의 합을 구해준다.
//	}
//
//	outStream.setf(ios::fixed); 
//	outStream.setf(ios::showpoint); 
//	outStream.precision(2);
//	outStream.setf(ios::fixed | ios::showpoint | ios::right);//오른쪽 정렬
//	outStream << "!@#!@#The sum of number in infile.txt is : ";
////	outStream.setw(100)	<< nSum+0.22222 << endl;
//	
//	inStream.close();
//	outStream.close();
//	return 0;
//}
int main()
{
	ifstream inStream;	//1/객체생성
	ofstream outStream;	//1.객체 생성
	inStream.open("infile.txt"); //2.객체 연동(infile.txt라는 파일과의 연동을 진행함)
	if (inStream.fail())//instream이라는 파일이 없을때의 결과를 정의
	{
		cout << "File doesnt open";
		exit(0);
	}
	outStream.open("outfile.txt");	//outstream.즉 뭔가쓰거나 만들파일로 outfile을 정의하여준다.
	int *pnData;
	int nSizeOfArray = 0;
	int nIndex = 0;
	int nDummy;
	while (!inStream.eof()) //읽어들이는것이 끝날때까지 숫자열 단위로 다음과같은 작업을 반복하여준다.
	{
		inStream >> nDummy;
		nSizeOfArray++;
	}
	inStream.seekg(inStream.beg); //스트림의 시작으로 다시 돌아가자
	pnData = new int[nSizeOfArray];
	while (!inStream.eof())
	{
		inStream >> pnData[nIndex];
		nIndex++;
	}
	int nSum = 0;
	for (nIndex = 0; nIndex < nSizeOfArray; nIndex++)	//3.각종사용
	{
		nSum += pnData[nIndex]; //모든 항의 합을 구해준다.
	}
	outStream << "!@#!@#The sum of number in infile.txt is : "	//컴파일후 아웃파일이 잘 작성되었는지 확인해보자.
		<< nSum << endl;
	inStream.close();
	outStream.close();//4.닫기
	bool a = true;
	if (a==2)
	{
		cout << "hi";
	}
	return 0;
}



