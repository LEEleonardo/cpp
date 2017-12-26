#pragma once
#include <string>
#include <vector>
#include "CElection.h"
using namespace std;

class CVoter
{
private:
	string m_strId;
	vector <CElection> m_cElection;
	
public:
	void clear();
	CVoter(string strId, CElection election);
	CVoter();
	void ShowMe();
	void GetElection(vector <CElection> &vecelection) const;
	void SetElection(const vector <CElection> &Election);
	void AddElection(const CElection& Election);
	string GetId() const;
	void SetId(string strId);
	static int m_nCountVoter;
	static void PrintVoter();
	static int GetCountVoter();
	friend ostream& operator<<(ostream &output,const CVoter &r1);

};


