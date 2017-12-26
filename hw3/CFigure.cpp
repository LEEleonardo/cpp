#include "stdafx.h"
#include "CFigure.h"
#include "math.h"
#include <iostream>
using namespace std;
namespace Figure {
	CFigure::CFigure()
	{
		m_nX=250;
		m_nY=250;
		m_nAngle=0;
	}
	CFigure::CFigure(double nX, double nY, double nAngle)
	{
		m_nX = nX;
		m_nY = nY;
		m_nAngle = nAngle;
		if (abs(nX) >= 500 || abs(nY) >= 500)
		{
			cout << "please input the value lower than 500";
			exit(1);
		}
	}

	CFigure::~CFigure()
	{
	}
	double CFigure::GetX() const
	{
		return m_nX;
	}
	void CFigure::SetX(double xsample)
	{
		m_nX = xsample;
	}
	double CFigure::GetY() const
	{
		return m_nY;
	}
	void CFigure::SetY(double ysample)
	{
		m_nY = ysample;
	}
	double CFigure::GetAngle() const
	{
		return m_nAngle;
	}
	void CFigure::SetAngle(double anglesample)
	{
		m_nAngle = anglesample;
	}

	void CFigure::ComputeArea()
	{
		cout << endl << "CFIGURE AREA " << endl;
	}

	void CFigure::Draw()
	{
		cout << "Hi! I'm just figure class!" << endl;
	}

	void  CFigure::Centering()
	{
		m_nX = 250;
		m_nY = 250;
		cout << "clear! \ncenter : (250,250)"<<endl;
		Draw();//부모의 draw가아닌 자식의 draw가 불러진다. 그이유는 draw가 overidden되었기 때문이다.
		//일단 draw후 컴파일러가 virtual이면 다시 찾아서 overridden하여 수행
		//CFigure* a[5];
		
	}

}
