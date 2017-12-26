#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CElection
{
public:
	CElection();
	CElection(string strItem, int nScore);
	string GetItem() const;
	int GetScore() const;
	void SetItem(string strItem);
	void SetScroe(int nScore);

private:
	string m_strItem;
	int m_nScore;

	
};


