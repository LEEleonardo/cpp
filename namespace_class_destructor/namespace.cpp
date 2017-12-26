// chap10part2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<string>
#include "CDyna.h"
using namespace SJL;	//정의1
//using SJL::CDyna;		//정의2

namespace ex1
{
	void exfunc()
	{
		cout << "---------------------------good---------------";
	}
}

namespace ex2
{
	void exfunc()
	{
		cout << "----------------bad--------------------";
	}
}

using namespace ex2;//이렇게 쓰면 밑에서 함수사용 ex2를 자동으로 선택한다. ex1:: ex2::처럼 식별자를 명시해야하는 경우가 생긴다.

int main()
	{
		CDyna *pDyna, aDyna; //cdyna는 어딘가에 그냥 있지만 무엇을 가리키고 있지는 않다.
		pDyna = new CDyna; //모르는 주소가 할당된 주소가 된다.할당된곳에는 m_nsize 와 m_pnscheduel의 공간도 생겼다,
		pDyna->ShowSchedule();
		const int nSize = 3;
		int pSchedule[nSize] = { 1000,1200,1300 };
		pDyna->SetInfo(nSize, pSchedule);
		pDyna->ShowSchedule();
		aDyna = *pDyna;	//포인터안에 숫자만 복사. 그주소로 가서의 데이터는 복사를 하지 않는다.
		cout << endl<<"shallow copy" << endl;
		aDyna.ShowSchedule(); //SHALLOW 카피라서 ADYNA는 ㅈ소를 가리키고 있지만 밑에 공간은 가리키고 있지 않다.
		//int pSchedule2[nSize] = { 1000,1200,1300 };
		//pDyna->SetInfo(nSize, pSchedule);
		//pDyna->ShowSchedule();
		delete pDyna; //소멸자를 확인 ADYNA가 죽는순간을 확인하자.
		CDyna a;// b, c;
		int aa[3] = { 1,2,3 };
		int bb[3] = { 4,5,6 };
		int cc[3] = { 7,8,9 };
		a.SetInfo(10, aa);
		//b.SetInfo(20, bb);
		//c.SetInfo(30, cc);
		a;//= b = c;
		cout << endl << endl << "this is a " << endl;
		CDyna test1;
		cout << endl << endl << "drop" << endl;
		test1.ShowSchedule();
		//a.ShowSchedule();
		exfunc();
		return 0;
	}


