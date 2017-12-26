#pragma once
#include <iostream>
using namespace std;
class CMoney
{
public:
	CMoney();
	~CMoney();
private:
	int m_nDollar;
public:
	int m_nCent;
	int GetDollar() const;
	int GetCent() const;
	CMoney(int nDollar, int nCent);
	friend const CMoney operator +(const CMoney& aMoney, const CMoney &bMoney);
	//const CMoney operator +(const CMoney& bMoney);
	friend ostream& operator << (ostream &outStream, const CMoney &aMoney);
	static int test1;
	static void test2();
};


