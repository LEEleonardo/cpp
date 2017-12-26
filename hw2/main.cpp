// HW2가반이상준20142183시간.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include "CVoter.h"
#include "CElection.h"
#include <fstream>
#include <string>


using namespace std;

int CVoter::m_nCountVoter=0;

void problem1();
void problem2();
void problem3();
void problem4(vector <CVoter> &vecVoterList);
void problem5(vector <CVoter> &vecVoterList,vector <string> &vecElectionNames);
bool FindVoter(const vector<string>& vecStrVotername, string strVoter, int& nIndexOfVoter);


int main()
{
	vector <CVoter> vecVoterList;
	vector <string> vecElectionNames;
	problem1();
	problem2();
	problem3();
	problem4(vecVoterList);
	problem5(vecVoterList, vecElectionNames);
	return 0;
}

void problem1()
{
	cout << endl << "<problem 1 answer>" << endl;
	CElection example1("I am Sam", 5);
	CElection example2("Iron man", 3);
	vector <CElection> sampleElection1;
	sampleElection1.push_back(example1);
	sampleElection1.push_back(example2);
	CVoter test1;
	test1.SetElection(sampleElection1);
	test1.ShowMe();
}

void problem2()
{
	cout << endl << "<problem 2 answer>" << endl;
	CVoter::PrintVoter();
}

void problem3()
{
	cout << endl << "<problem 3 answer>" << endl;
	CElection example1("Bat MAN", 5);
	CElection example2;
	CElection example3("I can speak", 5);
	CVoter test1;
	CVoter test2;
	test1.SetId("Mr.Edison");
	test2.SetId("Ms.Kate");
	vector <CElection> sampleElection1;
	sampleElection1.push_back(example1);
	test2.SetElection(sampleElection1);
	test2.AddElection(example3);
	cout << test1 << test2;

}

void problem4(vector <CVoter> &vecVoterList)
{
	CVoter::m_nCountVoter = 0;
	cout << endl << "<problem 4 answer>" << endl;
	ifstream robotagent("amazonReview.txt");
	vector <string> vecStrVoterNames;
	string strName;
	string line;
	string strElection;
	string val;
	int nIndexOfVoter = 0;
	int item;
	vector<string> v;
	int k = 0;
	int ii = 0;
	if (robotagent.is_open())
	{
		while (!robotagent.eof())
		{
			robotagent >> strElection >> strName >> item;
			CElection textElection(strElection, item);
			bool booltest = FindVoter(vecStrVoterNames, strName, nIndexOfVoter);
			if (booltest == true)
			{
				vecVoterList[nIndexOfVoter].AddElection(textElection);
			}
			else
			{
				vecStrVoterNames.push_back(strName);
				CVoter textVoter(strName, textElection);	
				vecVoterList.push_back(textVoter);

			}
			//getline(robotagent, line);	
		}
		//	}
		//}
	}
	cout <<endl<< "Voter Count : " << vecVoterList.size()<<endl;
	for (int i = 0; i < vecVoterList.size(); i++)
	{
		cout << vecVoterList[i];
	}
}

void problem5(vector <CVoter> &vecVoterList, vector <string> &vecElectionNames)
{
	
	vector <CElection> strElection;
	for (int i = 0; i < vecVoterList.size(); i++)
	{
		vecVoterList[i].GetElection(strElection);
		for (int ii = 0; ii < strElection.size(); ii++)
		{
			int torf = 0;
			for (int iii = 0; iii < vecElectionNames.size(); iii++)
			{
				if (vecElectionNames[iii] == strElection[ii].GetItem())
				{
					torf++;
				}
			}
			if (torf == 0)
			{
				vecElectionNames.push_back(strElection[ii].GetItem());
			}
		}
	}

	int i1 = vecElectionNames.size();
	int i2 = vecVoterList.size();
	int** pDataset = new int*[i2];
	for (int i = 0; i < i1; i++)
	{
		pDataset[i] = new int[i2];
		memset(pDataset[i], 0, 4 * i2);
	}
	for (int i = 0; i < vecElectionNames.size(); i++)
	{
		for (int j = 0; j <  vecVoterList.size(); j++)
		{
			vector <CElection> example;
			vecVoterList[j].GetElection(example);
			pDataset[i][j] = example[i].GetScore();
		}
	}
	cout << endl  << "<problem 5 answer>";
	for (int i = 0; i < vecElectionNames.size(); i++)
	{
		cout << endl;

		for (int j = 0; j < vecVoterList.size(); j++)
		{
			cout << pDataset[i][j] <<"	";
		}
	}
	
}

ostream& operator<<(ostream &output, const CVoter &r1)
{
	//CVoter::ShowMe()
		int nSize = r1.m_cElection.size();
		cout << endl << "---------------------" << endl;
		cout << "User Id : " << r1.m_strId << endl << endl;
		for (int i = 0; i < nSize; i++)
		{
			cout << "Item : " << r1.m_cElection[i].GetItem()<< endl << "Score : " << r1.m_cElection[i].GetScore() << endl;
		}
		cout << "---------------------" << endl;
	return output;
}

bool FindVoter(const vector<string>& vecStrVotername, string strVoter, int& nIndexOfVoter)
{
	int torf = 0;
	for (int i = 0; i < vecStrVotername.size(); i++)
	{
		if (strVoter == vecStrVotername[i])
		{
			nIndexOfVoter = i;
			return true;
		}
		
	}
	return false;
}
