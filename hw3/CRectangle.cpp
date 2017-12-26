#include "stdafx.h"
#include "CRectangle.h"
#define PI  3.14159265358979
#include "math.h"
#include <iostream>
using namespace std;
namespace Figure {

	CRectangle::CRectangle():CFigure(), m_nXWidth(10), m_nYWidth(10)//cfigure의 기본생성자를 default로		m_nX=250;m_nY = 250;m_nAngle = 0;
	{

	}

	CRectangle::CRectangle(double nX, double nY, double nAngle, double nXWidth, double nYWidth):CFigure(nX,nY,nAngle), m_nXWidth(nXWidth), m_nYWidth(nYWidth)//cfigure default 아닌것 한개 씀
	{
		if (abs(nX) + abs(nXWidth) >= 500 || abs(nY) + abs(nYWidth) > 500)
		{
			cout << "please set |width|+|ceter point| is less than 500";
			exit(1);
		}
	}

	CRectangle::~CRectangle()
	{

	}

	void CRectangle::GetCorners(double &x1, double &y1, double &x2, double &y2, double &x3, double &y3, double &x4, double &y4 )	///////////////////////////////////////////////////return시 callbyreference로 return 한다.
	{
		double angle = (double)GetAngle()* PI / 180;
		x1 = (GetX() - m_nXWidth)*cos(angle) - (GetY() + m_nYWidth)*sin(angle);
		y1 = (GetX() - m_nXWidth)*sin(angle) + (GetY() + m_nYWidth)*cos(angle);

		x2 = (GetX() + m_nXWidth)*cos(angle) - (GetY() + m_nYWidth)*sin(angle);
		y2 = (GetX() + m_nXWidth)*sin(angle) + (GetY() + m_nYWidth)*cos(angle);

		x3 = (GetX() + m_nXWidth)*cos(angle) - (GetY() - m_nYWidth)*sin(angle);
		y3 = (GetX() + m_nXWidth)*sin(angle) + (GetY() - m_nYWidth)*cos(angle);

		x4 = (GetX() - m_nXWidth)*cos(angle) - (GetY() - m_nYWidth)*sin(angle);
		y4 = (GetX() - m_nXWidth)*sin(angle) + (GetY() - m_nYWidth)*cos(angle);
	}
	double CRectangle::GetXWidth() const
	{
		return m_nXWidth;
	}
	void CRectangle::SetXWidth(double xwidth)
	{
		m_nXWidth = xwidth;
	}
	double CRectangle::GetYWidth() const
	{
		return m_nYWidth;
	}
	void CRectangle::SetYWIdth(double ywidth)
	{
		m_nYWidth = ywidth;
	}
	void CRectangle::ComputeArea() 
	{
		double  area = 2 * m_nXWidth*2*m_nYWidth;
		cout << endl<<"Rectangle width:" << 2*m_nXWidth << "   Rectangle length:" << 2*m_nYWidth << "\t  Rectangle area :" << area << endl;
	}
	void CRectangle::Draw()
	{
		cout << "Type : Rectangle\nCenter coodrinate:(" << GetX() << "," << GetY() << ")" << endl << "x_width:" << m_nXWidth << "\t y_width:" << m_nYWidth << endl << "angle:" << GetAngle()<<endl<<endl;
	}
}
