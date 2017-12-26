#pragma once
#include "CFigure.h"
namespace Figure 
{
	class COval :
		public CFigure
	{
	private:
		double m_nXWidth;
		double m_nYWidth;
	public:
		COval();
		virtual ~COval();
		COval(double nX, double nY, double nAngle, double nXWidth, double nYWidth);
		double GetXWidth() const;
		void SetXWidth(double xwidth);
		double GetYWidth() const;
		void SetYWIdth(double ywidth);
		void ComputeArea() ;
		virtual void Draw() ;
	};

}
