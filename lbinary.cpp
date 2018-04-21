#include <iostream>
using namespace std;
#include "lbinary.h"




string LBinary::toString()

{
	// Make getOp() return a string
	return string("(" + left->toString() + " " + getOp() + " " + right->toString() + ")");
}


LBinary::LBinary(LExpr * left, LExpr * right) : left(left), right(right)
{

}

VarMap LBinary::getVars()
{
	VarMap leftVars = left->getVars();
	VarMap rightVars = right->getVars();
	VarMap lvarMap;
	lvarMap.insert(leftVars.begin(), leftVars.end());
	lvarMap.insert(rightVars.begin(), rightVars.end());
	return lvarMap;

}

