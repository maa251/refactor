#pragma once
#include <string>
using namespace std;
#include "lexpr.h"

struct LUnary : public LExpr
{
	LExpr * right;
	virtual string getOp() {return "!";} // Returns the operator character used in printing.
	LUnary(LExpr * right);
	string toString();
	VarMap getVars();
	//LValue evaluate();
};
