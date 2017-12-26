// ConsoleApplication27.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int declared_size = 20;

void fillarray(int a[], int size, int& numberused);

int indexofsmallest(int a[], int startindex, int numberused);

void sort(int a[], int numberused);

void swapvalues(int& v1, int& v2);

int search(int a[], int numberused, int target);

int main()
{
	cout << "this program sort\n";
	int samplearray[10], numberused;
	fillarray(samplearray, 10, numberused);
	sort(samplearray, numberused);
	cout << "it is \n";
	for (int index = 0; index < numberused; index++)
	{
		cout << samplearray[index] << "";
		cout << endl;
	}


	return 0;


}

void fillarray(int a[], int size, int& numberused)
{
	cout << "enter" << size << " no negative nube\n mark the endof lis is negative ";
	int next, index = 0;
	cin >> next;
	while ((next > 0) && (index < size))
	{
		a[index] = next;
		index++;
		cin >> next;
	}
	numberused = index;
	cout << "index is"<<index << endl;
}

void sort(int a[], int numberused)
{
	int indexofnextsmallest;
	//맨마지막에 두개가 남을때 이것을 한번만 돌리면된다. 이유는 둘중작은거 하나만 찾으면 되기 때문이다.
	for (int index = 0; index < numberused - 1; index++)
	{
		indexofnextsmallest = indexofsmallest(a, index, numberused);
		swapvalues(a[index], a[indexofnextsmallest]);
	}
}

void swapvalues(int&v1, int& v2)
{
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}

int indexofsmallest(int a[], int startindex,int numberused)
{
	//min값에 a의 시작값을 넣어준다.
	int min = a[startindex];
	//indexofmin에는 index의 시작값을 넣어준다.
	int indexofmin = startindex;
	//a의 index는 startindex+1부터 시작된다.
	//만약 a[index]가 a의 맨시작점인 min값보다 작다면 min값에 작은값a을 넣어준다.
	//indexofmin에는 작은값을 갖는 index값을 넣어준다.
	for (int index=startindex+1;index < numberused; index++)
		if (a[index] < min)
		{
			min = a[index];
			indexofmin = index;
		}
	return indexofmin;
}

//a배열과 그것에대한 크기와 taget값을 받아준다.
//target과 동일한 a[]배열의 index값을 찾아준다.
int search(int a[], int numberused, int target)
{
	int index = 0;
	bool found = false;
	//a[index]값=target과 동일한 값이되면 루프를 멈춘다.
	while ((!found) && (index < numberused))
	{
		if (target == a[index])
			found = true;
		else
			index++;
	}
	if (found)
		return index;
	//else가 나오는 경우는 a[]의 배열이 끝나도록 target과 동일한 값이 없을때 이다.
	else
		return -1;
}

