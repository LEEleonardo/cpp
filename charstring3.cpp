// practice.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#include <string>
#include <iostream>
#include "stdafx.h"
using namespace std;

int main()
{	
	////strcpy_s(chString1, "bye");
	////cout << chString1<<endl;
	////char chString2[] = "hi";
	////cout << chString2[0]<<chString2[1]<<chString2[2];
	////strcat_s(chString1, chString2);
	////cout << endl << chString1;
	////bool a;
	////char a1[3] = "ab";
	////char a2[3] = "ac";
	////a = strcmp(a1, a2);
	////cout << a;


	////1.strcat시 붙여넣는것이기 때문에 크기가 그만큼늘어나니 처음 할당공간을 크게하여주자.
	//char string1[5]="ab";
	//char string2[3]="ac";
	//bool a = strcmp(string1, string2);
	//cout << a << endl;
	//strcat_s(string1, string2);
	//cout << string1 << endl << string2 <<endl;
	//strcpy_s(string1, string2);
	//cout << string1;

	////2.cstring이 carray가 되는순간을 확인하자. 예측할 수없다.
	//char string3[3] = "12";
	////string3[2] = 'c'; 이코드에 따라 달라짐을 확인해라.
	//strcpy_s(string2, string3);
	//cout << endl << string2;

	////3. ignore는 조건이 나올때가지 기다림을 의미한다.
	//int n;
	//cout << endl << "please input num(with t_123t123 input!) : ";
	//cin >> n;
	//cin.ignore(5, 't');//5개까지 기다려볼게(무시해볼게).
	////t이전을 버리겠다.
	////5개까지를 버리겠다.
	////1t입력시 5개까지 버리니 엔터쳐도 무시되어서 버퍼에없다.
	////123456t입력시 엔터치면 5개이후이면 t이전에도 포함되지않아 버퍼에있다.
	////실습해보니 5개넘어가면 t바로뒤까지 버린다.
	//

	//cout << n;
	//
	////4-1.ignore을 언제 사용해야하는지 살펴보자.
	//int n2;
	//cout << endl << "please input an integer : ";
	//cin >> n2;
	//cout << "please input  sentence : ";
	//char inputString[50];
	//cin.getline(inputString,3);
	//cout << inputString;

	////4-2-오류가 생긴이유는 cin.getline(inputString, 30);이부분때문이다.
	////한줄단위로 30글자로 받으라 하였는데 위에 cin을 입력후 엔터를 쳐서 버퍼에
	////endl이 남아있어 자동으로 다음 cin에서 enter을 인자로 받게된것이다.
	//int n3;
	//cout << endl<<"4-2"<<endl << "please input an integer : ";
	//cin >> n3;
	//cout << "please input  sentence : ";
	//char inputString2[50];
	//cin.ignore(3, '\n');
	//cin.getline(inputString2, 5);
	//cout << inputString2;


	////정리:cin.getline(cstring,숫자)-숫자만큼크기만 입력받는다.
	////정리:cin.ignore(숫자,'\n') 숫자이상을 버리거나 엔터까지의 입력을 버린다.
	////개행문자가 발견될떄까지 n개의 문자가버려지고 그다음 개행문자도 버려지고 ignore가 종료된다.
	//
	////string에서는 안됨을 확인!
	////cout << endl << endl << endl;
	////char strex1[2] = "a";
	////string strex2 = "cde";
	////strcat(strex1, extrex2);
	////cout << strexl1;

	//1.string에 대하여 한번 확인하여 보자.
	string strex1 = "stres1";
	string strex2 = "strex2";
	string strex3 = strex1 + strex2;
	cout << strex3;

	//2.string을 이용한 각종함수 //몇번째인지 세줄때 한글자단위로 012345이렇게!
	string strex4 = "hi my name is sexy guy";
	int nindex = strex4.find("name");
	cout << endl << "name : " << nindex << endl;
	nindex = strex4.find_first_of("m");
	cout << endl << "find? : " << nindex;
	//*******************3.string과 cstring의 결합 - string cstring으로 바꾸어준다.
	string value1;
	char c_string[30] = "hoho";
	value1 = c_string;
	char ex1[10];
	//이거절때 안된다. 알다싶이 cstring은 상수형태이기에 특별한 함수들(strcat)같은것을 사용해 주어야한다.ex1=value1.c_str();
	cout << "Ex1" << ex1 << endl;
	cout << endl << "value" << value1 << endl; //string은 변수로 취급되며 c-string은 상수로 취급되기 때문에 변수에 상수담는것은 가능하지만 상수에 변수를 담는것은 변수를 상수화하는 c_string.c_str()함수를 쓴다.
	strcat_s(c_string,strex1.c_str());
	cout << endl<<"c_string:" << c_string<<endl<<endl;
	char a;
	cin.get(a);
	cout << a;
	

	////1.그냥 cin을 하게되면 spacebar가 입력의 단위가 되어버리는 불편함이있다.
	//char getlineex1[10];
	//char getlineex2[10];
	//cin >> getlineex1 >> getlineex2;
	//cout << "get;ineex1:" << getlineex1;
	//cout<<endl << "get lineex2:" << getlineex2<<endl;

//	//2.해결해주기위해서 getline함수를 이용하여준다.
//	//계속헷갈렸던부분인데 cout 이나 그냥 cin은 뒤에 endl을 버퍼에 남겨두지만
//	//cin.getline은 알아서 버퍼를 삭제시켜준다.
//	//이때 위에서 입력후엔터가 버퍼에있으니 소거부터 시켜보자.
//	//cin.ignore(50, '\n');
//	cin.getline(getlineex1, 50);
////	cin.ignore(50, '\n');
//	cin.getline(getlineex2, 50);
//	cout << endl << "get;ineex1:" << getlineex1;
//	//이때 위에서 입력후엔터가 버퍼에있으니 소거부터 시켜보자.
//	cout << endl << "get lineex2:" << getlineex2;

	

////	//3. string을 get line으로 받아보자. 필요성을제기
////string a1;
////string a2;
////cin >> a1 >> a2;
////cout << endl << "a1 : " << a1 << endl << "a2 : " << a2;
//// 이렇게 해야한다. cin.gerliner과 getline(cin)은 굉장히 헷갈리니 주의하자.
//string str1;
//string str2;
//getline(cin, str1);
//getline(cin, str2);
//cout << endl << "str1 : " << str1 << endl << "str2 : " << str2;
	return 0;
}


