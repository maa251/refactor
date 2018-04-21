#include "lvar.h"



LVar::LVar(string name) : Var(name, uu)
{
}

LVar::LVar(string name, LValue value) : Var(name, value)
{
}


LValue LVar :: evaluate() 
{
  return value; 
}

string LVar::toString()
{
	return name;
}

VarMap LVar::getVars()
{
	VarMap varMap;
	map_insert(varMap, name, this);
	return varMap;
}
