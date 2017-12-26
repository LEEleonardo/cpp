// ConsoleApplication27.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int declared_size = 20;

void fillarray(int a[], int size, int& numberused);

int search(int a[], int numberused, int target);

int main()
{
	int arr[declared_size], listsize, target;
	//fillarray로 20이하의 원하는 배열을 만들어준다.
	fillarray(arr, declared_size, listsize);
	char ans;
	int result;
	do
	{
		cout << "enter number of search for : ";
		cin >> target;	//이값을 찾고싶다는 의미이다.
		result = search(arr, listsize, target);//result에는 target과 동일한 index값이 담긴다.
		if (result == -1)
			cout << target << "is not the list";
		else
			cout << target << "is stored int " << result << endl;
		cout << "do again?:";
		cin >> ans;
	} while ((ans == 'y') && (ans == 'Y'));

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

