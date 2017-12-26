nclude "stdafx.h"
#include <fstream>
#include <istream>
#include <ostream>
#include <iostream>
using namespace std;

int main()
{
	//ifstream instream , instream.open("infile.txt")-->ifstream instream("infilfe.txt") 두개가 동일. 항상 파일이 열렸는지 확인한다.
	ifstream inStream;
	ofstream outStream;
	inStream.open("infile.txt");	//새로만들때마다한다.out은 없으면 새로만드니 생관이없다.
	if (inStream.fail())	//없으면 그냥 exit으로 끝내버린다.
	{ 
		cout << "File open failed.\n";exit(1); 
	}

	outStream.open("outfile.txt");
	
	int *pnData;
	int nIndex = 0;
	int nSizeOfArray = 0;
	int nDummy;
	while (!inStream.eof())
	{
		inStream >> nDummy;
		nSizeOfArray++;
	}
	inStream.beg(0);
	pnData = new int[nSizeOfArray];
	while (!inStream.eof())
	{
		inStream >> pnData[nIndex];
		nIndex++;
	}
	//int first, second, third;
	//nStream >> first >> second >> third;
	int nSum = 0;
	for (nIndex = 0; nIndex < nSizeOfArray; nIndex++)
	{
		nSum += pnData[nIndex];
	}
	outStream << "The sum of the first 3\n" << "numbers in infiletxt\n";

    return 0;
}


