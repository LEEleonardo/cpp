// petre.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Dog.h"
#include "Pet.h"
//Program to illustrate use of a virtual function to defeat the slicing problem.
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;


int main()
{
	Dog vdog;
	Pet vpet;
	vdog.name = "Tiny";
	vdog.breed = "Great Dane";
	vpet = vdog;	//자식은 부모에 할당가능하기에 가능
	cout << "The slicing problem:\n";
	//vpet.breed; is illegal since class Pet has no member named breed.
	//dog에는 두개 pet에는 한개가있다. pet 에는 한개의 공간 dog에는 두개의 공간이 있다. pet은 vdog를 받을때 breed공간이 없기떄문에 짤린다. 이를 slicing

	vpet.print();
	cout << "Note that it was print from Pet that was invoked.\n";
	cout << "The slicing problem defeated:\n";
	Pet *ppet;
	ppet = &vpet;
	Dog *pdog;
	pdog = &vdog;
//	pdog = new Dog;
//	pdog->name="h";
	//pdog->breed = "hi";
	///ppet->name = "pet";
	//
	//
	//*pet 주소
	//
	//*dog 주소
	//
	//pet data
	//
	//dog data
	//
	//즉 객체를 포인터 객체로 만들어주면 짤리지 않는다. virtual이기에 가능하다.
	//
	//참고로 변수자체만으로
	//pet = a, dog= b 를 한후 a=b를 한다고할때 virtual로 하더라도 b는 사용불가
	//그이유는 이미 a라는 공간안에 pet에 알맞게 세팅이되어있기때문이다.
	//하지만 동적배열을 한다면 이러한 고민이 말끔히 사라진다.
	//pdog->name = "Tiny";
	//pdog->breed = "Great Dane";
	//ppet = pdog;
	//cout << "pointer dynamic" << endl;

	cout << endl << endl;
	ppet->print();
	pdog->print();

	cout << endl << endl;
	ppet = pdog;
	ppet->print();
	pdog->print();



	//The following, which accesses member variables directly
	//rather than via virtual functions would produce an error:
	//cout << "name: " << ppet->name << "  breed: "
	//breed 라는것은 없기떄문에 이는 불가능하다.
	//     << ppet->breed << endl;
	//It generates an error message saying 
	//class Pet has no member named breed.
	//cout << endl << endl << endl;
	//vdog.print();
	//static_cast<Pet>(vdog) = vpet;	//어차피 이렇게 해도 vdog는 객체가 dog가 바뀌는 함수는 없다.
	//cout << endl << endl << endl;
	//vdog.print();
	return 0;
}
//
//void Dog::print() const
//{
//	cout << "name: " << name << endl;
//	cout << "breed: " << breed << endl;
//}
//
//void Pet::print() const
//{
//	cout << "name: " << name << endl;
//}

