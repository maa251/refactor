#pragma once

#include "lexpr.h"

// typedef vector<>

struct LBinary :public LExpr
{
	LExpr * right;
	LExpr * left;
	virtual string getOp() {return "&";}// Returns the operator character used in printing.
	LBinary(LExpr * left, LExpr * right);
	string toString();
	VarMap getVars();

	// Testing out using a overridden truth table for solving

};


