// ConsoleApplication32.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include "CMoney.h""
using namespace std;
int CMoney::test1 = 100;
CMoney Add(CMoney aMoney, CMoney bMoney);
//const CMoney operator +(const CMoney &aMoney, const CMoney &bMoney);
void ShowMoney(CMoney aMoney);
//ostream& operator << (ostream &outStream, const CMoney &aMoney);

int main()
{
	CMoney::test2();
	CMoney aMoney(3, 70), bMoney(7, 45),cMoney;
	//cmoney는 a,b 머니를 더하고 싶다.
	//오류가 생긴다. cMoney = aMoney + bMoney;
	//이렇게 add 라는 함수를 정의해서 더하고 싶다.! cMoney = Add(aMoney,bMoney);
	//cMoney = Add(aMoney, bMoney);
	cMoney = aMoney + bMoney;
//	ShowMoney(aMoney);
	//cout << aMoney;
	//cout << "+";
	//ShowMoney(bMoney);
	//cout << "=";
	//ShowMoney(cMoney);
	//cout <<endl;
	cout << aMoney << "+" << bMoney << "=" << cMoney << endl;
	return 0;
}
//
////CMoney Add(CMoney aMoney, CMoney bMoney)
// const CMoney operator +(const CMoney &aMoney,const CMoney &bMoney)
//{
//	int nCent = aMoney.GetCent()+bMoney.GetCent();
//	int nCarry = nCent / 100;
//	nCent = nCent % 100;
//	int nDollar = aMoney.GetDollar() + bMoney.GetDollar() + nCarry;
//	return CMoney(nDollar, nCent);
//}

void ShowMoney(const CMoney aMoney)
{
	cout << "$" << aMoney.GetDollar() << "." << aMoney.GetCent() << endl;
}

//ostream& operator << (ostream &outStream, const CMoney &aMoney)
//{
//	outStream << "$" << aMoney.GetDollar() << "." << aMoney.GetCent() << endl;
//	return outStream;
//}
const CMoney operator+(const CMoney &aMoney, const CMoney &bMoney)
{
	int dollar = 0;
	int cent = 0;
	dollar = aMoney.GetDollar() + bMoney.GetDollar();
	cent = aMoney.GetCent() + bMoney.GetCent();
	return CMoney(dollar, cent);
}

ostream& operator<<(ostream &output, const CMoney &r1)
{
	cout << r1.m_nDollar << r1.m_nCent;
	return output;
}

