#include <iostream>
#include <string>
using namespace std; 
#include "lnot.h"

LNot::LNot(LExpr * right) : LUnary(right)
{
}

string LNot::getOp() {return "!";}

LValue LNot :: evaluate() {
  if (right->evaluate() == tt) return ff;
  else if (right->evaluate() == ff) return tt;
  else return uu;

}
