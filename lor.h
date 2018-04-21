#pragma once
#include "lbinary.h"

struct LOr : public LBinary {

  LOr(LExpr * left, LExpr * right); 
  LValue evaluate(); 
  string getOp();
}; 

 
