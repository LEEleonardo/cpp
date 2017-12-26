#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "CDyna.h"
using namespace std;
CDyna::CDyna():m_nSize(0),m_pnSchedule(NULL) //생성자이다.
{
	
}


CDyna::~CDyna()	//소멸자이다.
{
	cout << "I am destrctor! haha" << endl;
	if (m_pnSchedule != NULL)	//만약 m_pnschedule이 있다면 해제시켜준다.즉 생성자는 main이 끝나기전에 소멸자로인해 소멸한다.
	{
		delete[] m_pnSchedule;
	}
}

void CDyna::ShowSchedule()
{
	if (m_pnSchedule == NULL)
	{
		cout<<endl << "There is no schedule";
	}
	else
	{
		for (int nIndex = 0; nIndex < m_nSize; nIndex++)
		{
			cout << m_pnSchedule[nIndex] << endl;
		}
	}
}

void CDyna::SetInfo(int nSize, int* pSchedule)
{
	m_nSize = nSize;
	if (m_pnSchedule != NULL)
	{
		delete[] m_pnSchedule;
	}
	m_pnSchedule = new int[m_nSize];	//이런것을 deep copy라 한다. 일단 m_pn에 새로운 공간을 할당하여준다.
	for (int nIndex = 0; nIndex < nSize; nIndex++)	//그냥 m_pnSchedule=pSchdeule하면 shallow copy로 둘다 같은 데이터영역을 가리게된다
	//둘다 같은 데이터영역을 가리키게 될시 하나가 값이 바뀌면 다른한부분도 값이 바뀌도록 되어있다.
	//또한 프로그램 종료시 메모리를 해제할때 둘다 동일한 공간을 가리키고 있다면 메모리헤제가 두번일어나는 오류가 생기게된다.
	//따라서 맴버변수의 영역을 새로만들어서 할당해주는 deep copy를 이용하도록 하자.
	{
		m_pnSchedule[nIndex] = pSchedule[nIndex];
	}
}

CDyna& CDyna::operator=(const CDyna& rtSide)//operation overloading 을 통하여 = 을 할때 대입연산자는 맴버funciton으로 한다.
//이때 값을 넣어줄떄도 마찬가지로 deep copy로 해주도록 한다.
{
	if (this == &rtSide)	//맴버fucnciotn을 부른 instance의 주소와 우측개체의 주소가 동일하다면 this를 그냥 리턴해서 끝내자.
	{
		return *this; //this는 객체의 포인터이므로 *this는 객체가 된다.
	}
	else
	{
		m_nSize = rtSide.m_nSize;
		if (m_pnSchedule != NULL)
		{
			delete[] m_pnSchedule;
		}
		//m_pnSchedule = rtSide.m_pnSchedule;	이렇게 shallow 처리시 에러발생!

		m_pnSchedule = new int[m_nSize];
		for (int nIndex = 0; nIndex < m_nSize; nIndex++)
		{
			m_pnSchedule[nIndex] = rtSide.m_pnSchedule[nIndex];
		}
	}
		return *this;

}


