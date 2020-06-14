#include "Ellipse.h"
CEllipse::CEllipse(Point P1, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Corner1 = P1;
}
	

void CEllipse::Draw(Output* pOut) const
{
	//Call Output::DrawEllipse to draw a rectangle on the screen	
	pOut->DrawEllipse(Corner1,FigGfxInfo, Selected);
}

