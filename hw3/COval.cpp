#include "stdafx.h"
#include "COval.h"
#include "math.h"
#include <iostream>
#define PI  3.14159265358979
using namespace std;
namespace Figure
{
	COval::COval() :CFigure(), m_nXWidth(10), m_nYWidth(10)
	{

	}
	COval::~COval()
	{

	}
	//오버라이딩은 모두 같은 형태(이름, 매개변수, 반환값 이 같은 형태)의 함수가 상속관계에서 재정의 되는것을 의미한다.이것이 redefinition 반면에, 
	//오버로딩은 함수의 이름이 같지만, 매개변수가 달라서 서로 다른 함수처럼 취급 되는것을 뜻한다.
	COval::COval(double nX, double nY, double nAngle, double nXWidth, double nYWidth) : CFigure(nX, nY, nAngle), m_nXWidth(nXWidth), m_nYWidth(nYWidth)//cfigure default 아닌것 한개 씀
	{
		if (abs(nX) + abs(nXWidth) >= 500 || abs(nY) + abs(nYWidth) > 500)
		{
			cout << "please set |width|+|ceter point| is less than 500";
			exit(1);
		}
	}

	double COval::GetXWidth() const
	{
		return m_nXWidth;
	}
	void COval::SetXWidth(double xwidth)
	{
		m_nXWidth = xwidth;
	}
	double COval::GetYWidth() const
	{
		return m_nYWidth;
	}
	void COval::SetYWIdth(double ywidth)
	{
		m_nYWidth = ywidth;
	}
	void COval::ComputeArea() 
	{
		double  area = 2 * m_nXWidth*m_nYWidth*PI;
		cout << "Oval's half width:"<< m_nXWidth<<"   Oval's half length:"<< m_nYWidth<< "\t   Oval area :" << area << endl;
	}

	void COval::Draw() 
	{
		cout << "Type : OVAL\nCenter coodrinate:(" << GetX() << "," << GetY() << ")"<<endl<<"x_width:"<<m_nXWidth<< "\t y_width:"<<m_nYWidth<<endl<<"angle:"<<GetAngle()<<endl<<endl;
	}

}
