#pragma once

#include <string>
using namespace std;

#include "var.h"
#include "lexpr.h"

struct LVar: public LExpr, Var {


  LVar(string name);
  LVar(string name, LValue value);

  LValue evaluate(); 
  VarMap getVars();
  string toString();
}; 
