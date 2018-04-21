#pragma once
#include "lbinary.h" 

struct LAnd : public LBinary 
{
  LAnd(LExpr * left, LExpr * right);
  string getOp();
  LValue evaluate(); 
}; 

