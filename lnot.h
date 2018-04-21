#pragma once

#include "lunary.h"


struct LNot : public LUnary {
  LNot(LExpr * right);
  LValue evaluate(); 
  string getOp();
}; 

