#pragma once
class CDyna
{
public:
	CDyna();
	~CDyna();
	void ShowSchedule();
	void SetInfo(int nSize,int* pnSchedule);
	CDyna& operator =(const CDyna& rtSide);
private:
	int m_nSize;
	int* m_pnSchedule;

};

 
