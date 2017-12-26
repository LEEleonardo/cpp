#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream rwStream;	//이전에는 if of 했지만 이번에는fstream
	rwStream.open("RandomAccess", ios::out | ios::binary); //ios in 을 업애주자 .이건 최초로 있어야한다.
	if (rwStream.fail())
	{
		cout << "n file";
		exit(0);
	}
	for (int nIndex = 1; nIndex <= 1000; nIndex++)
	{
		rwStream.write((char *)&nIndex, sizeof(int)); //1000개를 쓰겠다.
	}
	rwStream.close();
	rwStream.open("RandomAccess",  ios::out | ios::binary); //ios in 을 업애주자 .이건 최초로 있어야한다.파일을 한번
																	 //만들어주면 있는피일이 열리기는한다.또한 파일이 잘있기는 하지만 읽으려하니 잘안읽어진것이다.
																	 //잘안읽어주는이유는 set을 하지않아 끝에서부터 읽기 떄문이다.
	if (rwStream.fail())
	{
		cout << "n file";
		exit(0);
	}
	int nNum;
	for (int nIndex = 0; nIndex < 10; nIndex++)
	{
		rwStream.read((char *)&nNum, sizeof(int));
		cout << nNum << endl;
	}
	nNum = 6;
	rwStream.seekp((5 - 1) * sizeof(int));
	rwStream.write((char *)&nNum, sizeof(int)); //1000개를 쓰겠다.
	rwStream.seekg((2 - 1) * sizeof(int));
	for (int nIndex = 0; nIndex < 4; nIndex++)
	{
		rwStream.read((char *)&nNum, sizeof(int));
		cout << nNum << endl;
	}
	return 0;
}

	//ifstream inStream;	//1/객체생성
	//ofstream outStream;	//1.객체 생성
	//inStream.open("infile.txt"); //2.객체 연동(infile.txt라는 파일과의 연동을 진행함)
	//if (inStream.fail())//instream이라는 파일이 없을때의 결과를 정의
	//{
	//	cout << "File doesnt open";
	//	exit(0);
	//}
	//outStream.open("outfile.txt");	//outstream.즉 뭔가쓰거나 만들파일로 outfile을 정의하여준다.
	//int *pnData;
	//int nSizeOfArray = 0;
	//int nIndex = 0;
	//int nDummy;
	//while (!inStream.eof()) //읽어들이는것이 끝날때까지 숫자열 단위로 다음과같은 작업을 반복하여준다.
	//{
	//	inStream >> nDummy;
	//	nSizeOfArray++;
	//}
	//inStream.seekg(inStream.beg); //스트림의 시작으로 다시 돌아가자
	//pnData = new int[nSizeOfArray];
	//while (!inStream.eof())
	//{
	//	inStream >> pnData[nIndex];
	//	nIndex++;
	//}
	//int nSum = 0;
	//for (nIndex = 0; nIndex < nSizeOfArray; nIndex++)
	//{
	//	nSum += pnData[nIndex]; //모든 항의 합을 구해준다.
	//}
	//outStream << "!@#!@#The sum of number in infile.txt is : "
	//	<< nSum << endl;
	//inStream.close();
	//outStream.close();

