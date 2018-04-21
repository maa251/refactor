#pragma once
#include "lbinary.h"

struct LImplies: public LBinary
{
	LImplies(LExpr * left, LExpr * right);
	LValue evaluate();
	string getOp();
};