#pragma once
#include "CFigure.h"
namespace Figure {
	class CRectangle :
		public CFigure
	{
	public:
		CRectangle();
		CRectangle(double nX, double nY, double nAngle, double nXWidth, double nYWidth);
		virtual ~CRectangle();
		void GetCorners(double &x1, double &y1, double &x2, double &y2, double &x3, double &y3, double &x4, double &y4);
		double GetXWidth() const;
		void SetXWidth(double xwidth);
		double GetYWidth() const;
		void SetYWIdth(double ywidth);
		void ComputeArea();
		virtual void Draw();
	private:
		double m_nXWidth;
		double m_nYWidth;
	};

}
