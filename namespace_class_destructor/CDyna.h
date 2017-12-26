#pragma once
#include<iostream>
#include<string>
using namespace std;
namespace SJL {
	class CDyna
	{
	public:
		CDyna();
		~CDyna();
	private:
		int m_nSize;
		int* m_pnSchedule;
	public:
		void ShowSchedule();
		void SetInfo(int nSize, int* pSchedule);
		CDyna& operator=(const CDyna& rtSide);
	};

}
