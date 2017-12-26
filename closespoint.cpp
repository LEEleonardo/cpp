// ClosestPoint.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//array를 reference 로 넘기기

int FindClosetPoint(double pSample[],int nSizeOfArray, int target, double& nearest)
{
	int i;
	int line=0;
	int val;
	int ab[4];
	double diff;
	for (i = 0; i < 5; i++)
	{	//ab배열에 숫자의 차이를 쭉 써주고
		val = target - pSample[i];
		ab[i] = abs(val);
	}
	//, 가장 차이가 작은것을 for 문을 통하여 . if를써서 저장될때 값을 
	//  한변수에 넣고 그때의 diff에 저장. 만약 ab의 배열이 
	diff = ab[0];
	for (i = 0; i < 5; i++)
	{
		if (diff > ab[i])
		{
			diff = ab[i];
			line = i;
		}
	}
	nearest=pSample[i];
	diff = val;
	return diff;
}

int main()
{
	double pSample[5] = {0.3,0.6,0.1,0.4,0.8};
	int target;
	int diff;
	cin >> target;
	int nSizeOfArray = sizeof(pSample[5]);
	double nearest;
	diff=FindClosetPoint(pSample,nSizeOfArray,target,nearest);
	cout << diff;
    return 0;
}


