#pragma once
#include "ApplicationManager.h"
#include"Actions\Action.h"
#include"GUI\Input.h"
#include"GUI\Output.h"
#include "Figures\CRectangle.h"
#include "Figures\line.h"
#include "Figures\Rhombus.h"
#include "Figures\Triangle.h"
#include "Figures\Ellipse.h"
#include"Triangle.h"
class ToFront:public Action
{CFigure*s;
public:
	ToFront(ApplicationManager * pApp);
	void ReadActionParameters(){};
	void Execute();
	~ToFront(void);
};

