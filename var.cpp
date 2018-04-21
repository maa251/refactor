
#include <iostream>
#include <string>
using namespace std; 
#include "var.h"

string nameOfValue(LValue v){
  static string nameOfValueTable[]={"undefined", "true", "false"}; 
  return nameOfValueTable[v]; 
}

ostream & operator << (ostream & os, LValue val) {
  os << nameOfValue(val); 
  return os; 
}

Var::Var(string name) : name (name), value (uu) 
{
}

Var::Var(string name, LValue value) : name (name), value (value) 
{
}

void Var :: setValue(LValue v) 
{
  value = v; 
}

