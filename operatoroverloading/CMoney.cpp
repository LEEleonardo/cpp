#include "stdafx.h"
#include "CMoney.h"


CMoney::CMoney()
	: m_nDollar(0)
	, m_nCent(0)
{
}


CMoney::~CMoney()
{
}


int CMoney::GetDollar() const
{
	return m_nDollar;
}


int CMoney::GetCent() const
{
	return m_nCent;
}


CMoney::CMoney(int nDollar, int nCent)
{
	m_nDollar = nDollar;
	m_nCent = nCent;
}

void CMoney::test2()
{
	cout << test1 <<"yes!";
}

//const CMoney CMoney::operator +(const CMoney& bMoney)
//{
//
//		int nCent = m_nCent+bMoney.m_nCent;
//		int nCarry = nCent / 100;
//		nCent = nCent % 100;
//		int nDollar = m_nCent + bMoney.m_nDollar + nCarry;
//		return CMoney(nDollar, nCent);
//	}










