#include <iostream>
#include <string>
using namespace std; 
#include "lor.h"



LOr::LOr(LExpr * left, LExpr * right) : LBinary(left, right)
{
}

LValue LOr :: evaluate() {
  LValue lval = uu; 
  LValue rval = uu; 
  // call the left operand evaluate
  lval = left->evaluate();

  // call the right operand evaluate
  rval = right->evaluate();
  
  //apply truth table of logical or. 
  if (lval == tt || rval == tt) {
    return tt; 
  }
  if (lval == uu || rval == uu) {
    return uu; 
  }
  // only case left is both are ff
  return ff; 
}

string LOr::getOp() {return "|";}
