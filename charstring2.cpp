// 20171107.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	//string line; cout << "Enter input: "; 
	//getline(cin, line,"?232323");
	//cin >> line;
	string strEx;
	strEx = "how are you";
	int nIndex = strEx.find("ear");
	cout << nIndex << endl;
	nIndex = strEx.find_first_of("ear");
	cout << nIndex << endl;
	char chSting[20] = "Mr.Kim";
	//example
	string a;
	char b[10] = "hi";
	a = b;
	cout << a;
	strcpy_s(b, a.c_str());
	cout << b;
	//strEx = chString;
	strcpy_s(chSting,strEx.c_str());
	//cout << endl << endl << line<<endl<<endl;
	/*char chString1[30] = "hello", chString2[30];*/
	//chString1="Lee"불가능!
	//strcpy_s(chString2, "Lee");	//뒤에것을 앞으로 넣어준다. 조금다른것은 define함수이다.
	//if (chString1 == chString2) 하면 오류
	//if (strcmp(chString1,chString2)==0)	//같으면 0 이나옴을 반드시 알자!
	//{
	//	cout << "same"<<endl;
	//}
	//else
	//{
	//	cout << "not same"<<endl;
	//}
	//cin >> chString2;
	//cout << "second string is " << chString2 << endl;
	//chString 1 = chString1 + chString2; 기존에 사용하던 방식
	//strcat_s(chString1, chString2); //앞사람한테 뒤를 붙인다.
	//cout << chString1 << endl;
	//int n;
	//cout << "please input an integer :  ";
	//cin >> n;
	//cin.ignore(30, '\n');
	//cout << "please intput a setence";
	//cin.getline(chString2, 30);
	//cout << chString2 << endl;//그냥 ignore만 해주다면 일단 기다리는모습이 보여진다.
	//
	/*
	int n;
	cout << "please input an integer :  ";
	cin >> n;
	cout << "please intput a setence";
	cin.getline(chString2, 30); 이렇게하면 오류가 생기는데 이유는 엔터가 cin할때 남아있기 때문이다.
	cout << chString2 << endl;*/
	char chstring[20] = "hi";
	char chstring2[20] = "hello";
	strcat_s(chstring, chstring2);
	strcat_s(chstring, a.c_str());
	cout << endl << endl << chstring;


	string str1,str2;
	char ch[20];
	cin >> str2;
	cin.ignore(30, '\n');
	getline(cin, str1);
	cin.getline(ch, 20);
	cout << endl << endl << str1 << endl<<ch;
	return 0;
}


