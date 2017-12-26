#pragma once

namespace Figure
{

	class CFigure
	{
	public:
		CFigure();
		CFigure(double nX, double nY, double nAngle);
		virtual ~CFigure();
		double GetX() const;
		void SetX(double xsample);
		double GetY() const;
		void SetY(double ysample);
		double GetAngle() const;
		void SetAngle(double anglesample);
		void ComputeArea();
		virtual void Draw();
		void Centering();
	private:
		double m_nX;
		double m_nY;
		double m_nAngle;
	};

}
