#pragma once

enum LValue {
  uu, tt, ff, 
};
 
string nameOfValue(LValue v); 
struct Var{
  string name;
  LValue value; 

  Var(string name);
  Var(string name, LValue value);

  void setValue(LValue v);
}; 
ostream & operator << (ostream & os, LValue val); 
