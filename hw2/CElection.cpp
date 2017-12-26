#include "stdafx.h"
#include "CElection.h"


CElection::CElection()
{
	m_strItem = "torr";
	m_nScore = 3;
}


CElection::CElection(string strItem, int nScore)
{
	m_strItem = strItem;
	m_nScore = nScore;
}
string CElection::GetItem() const
{
	return m_strItem;
}
int CElection::GetScore() const
{
	return m_nScore;
}
void CElection::SetItem(string strItem)
{
	m_strItem = strItem;
}
void CElection::SetScroe(int nScore)
{
	m_nScore = nScore;
}
