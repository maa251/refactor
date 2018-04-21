#include "lunary.h"



string LUnary::toString()
{
	return string(string("(") + getOp() + right->toString() + string(")"));
}

LUnary::LUnary(LExpr * right) : right(right)
{

}

VarMap LUnary::getVars()
{
	return right->getVars();
}
