#include "stdafx.h"
#include "CVoter.h"
#include "CElection.h"

CVoter::CVoter(string strId,CElection election)
{
	m_strId = strId;
	m_nCountVoter++;
	m_cElection.push_back(election);
}


CVoter::CVoter()
{
	m_strId = "Mr.Smith";
	m_nCountVoter++;
	CElection val;
	m_cElection.push_back(val);
}


void CVoter::clear()
{
	m_cElection.clear();
}
void CVoter::ShowMe()
{
	int nSize = m_cElection.size();
	cout <<endl<< "---------------------"<<endl;
	cout << "User Id : " << m_strId<<endl<<endl;
	for (int i = 0; i < nSize; i++)
	{
		cout << "Item : " << m_cElection[i].GetItem()  << endl<<"Score : "<<m_cElection[i].GetScore() <<endl; 
	}
	cout << "---------------------" << endl;
}
void CVoter::GetElection(vector <CElection> &vecelection) const
{
	for(int i = 0 ; i<m_cElection.size();i++ )
	vecelection.push_back(m_cElection[i]);
}

void CVoter::SetElection(const vector <CElection> &Election)
{
	m_cElection.clear();
	for (int i = 0; i<Election.size(); i++)
		m_cElection.push_back(Election[i]);
}

void CVoter::AddElection(const CElection& Election)
{
	m_cElection.push_back(Election);
}

string CVoter::GetId() const
{
	return m_strId;
}
void CVoter::SetId(string strId)
{
	m_strId=strId;
}

void CVoter::PrintVoter()
{
	cout<<"Total Voter Number :"<< m_nCountVoter<<endl<<endl;
}

int CVoter::GetCountVoter()
{
	return m_nCountVoter;
}
