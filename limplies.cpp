#include "limplies.h"

LImplies::LImplies(LExpr * left, LExpr * right) : LBinary(left, right)
{
}

string LImplies::getOp()
{
	return "->";
}

LValue LImplies::evaluate()
{
	LValue lval = left->evaluate();
	LValue rval = right->evaluate();

	if (lval == tt && rval == ff) return ff;
	if (lval == uu || rval == uu) return uu;
	return tt;
}

