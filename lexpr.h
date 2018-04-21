#pragma once
#include <iostream>
#include <map>
using namespace std;
#include <string>
#include "var.h"

#define map_insert(my_map, str, value) my_map.insert(pair<string, Var*>(str, value))




typedef map<string, Var*> VarMap;


struct LExpr
{
	virtual LValue evaluate() {return uu;}
	virtual string toString() {return " ";}
	virtual VarMap getVars() {return VarMap();}

	bool solve();
};

ostream & operator << (ostream & os, LExpr & expr); 
 

