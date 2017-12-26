#include "stdafx.h"
#include "CDyna.h"
using namespace SJL;

class ccp;

//using namespace std;
namespace SJL {
	CDyna::CDyna()
		: m_nSize(0)
		, m_pnSchedule(NULL)
	{
	}
	ccp *a; 
	
	CDyna::~CDyna()
	{
		cout << "i AM DESCTRUCTOR ! HAHA!" << endl;
		if (m_pnSchedule != NULL)
		{
			delete[] m_pnSchedule; //이렇게 해야지 지우고 공간할당  안하면 리키즈가 생긴다.leakage
								   //지금은 의미가없다.	m_pnSchedule = NULL;//만약에 다른곳에서 공간을 체크
		}//객체를 소멸시킬때 공간을 풀어준다.
	}


	void CDyna::ShowSchedule()
	{
		if (m_pnSchedule == NULL)
		{
			cout << "There is no Schedule" << endl;
		}
		else
		{
			for (int nIndex = 0; nIndex < m_nSize; nIndex++)
			{
				cout << m_pnSchedule[nIndex] << endl;
			}
		}
	}


	void CDyna::SetInfo(int nSize, int* pSchedule) //입력받은 스케줄을 복사하고싶다.
	{
		m_nSize = nSize;
		//공간을 체크해주어야한다.
		if (m_pnSchedule != NULL)
		{
			delete[] m_pnSchedule; //이렇게 해야지 지우고 공간할당  안하면 리키즈가 생긴다.leakage
		//지금은 의미가없다.	m_pnSchedule = NULL;//만약에 다른곳에서 공간을 체크
		}
		m_pnSchedule = new int[m_nSize]; //전형적인 메모리 리키지를 만든다.
		for (int i = 0; i < m_nSize; i++) //내사이즈를 빠뜨리지 말자.
		{
			m_pnSchedule[i] = pSchedule[i]; //m_pn스케줄 공간이없으면 그냥 죽어버린다
		}
	}
	CDyna& CDyna::operator=(const CDyna& rtSide) {
		if (this == &rtSide)
		{
			// if right side same as left side 
			return *this;
		} //IF는 그대로
//변수 이름이 바뀔수 있지만 스탭이 동일하다.코드에 대한 변형은 할 줄 알아야한다.
		else
		{
			m_nSize = rtSide.m_nSize;
			if (m_pnSchedule != NULL)
			{
				delete[] m_pnSchedule;
			}
			m_pnSchedule = new int[m_nSize];
			for (int nIndex = 0; nIndex < m_nSize; nIndex++)
			{
				m_pnSchedule[nIndex] = rtSide.m_pnSchedule[nIndex];
			}
		}
		return *this;
	}		//이런식으로 하고 디버그해보면 주소가 다름을 알 수 있다.
}


