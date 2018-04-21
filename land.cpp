#include <iostream>
#include <string>
using namespace std; 
#include "land.h"



LAnd::LAnd(LExpr * left, LExpr * right) : LBinary(left, right)
{

}

LValue LAnd :: evaluate() {
  LValue lval = uu; 
  LValue rval = uu; 
  // call the left operand evaluate
  lval = left->evaluate();

  // call the right operand evaluate
  rval = right->evaluate();
  //apply truth table. 
  if (lval == ff || rval == ff) {
    return ff; 
  }
  if (lval == uu || rval == uu) {
    return uu; 
  }
  // only case left is both are tt
  return tt; 
}

string LAnd::getOp() {return "&";}
