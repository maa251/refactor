#include <cmath>
using namespace std;

#include "lexpr.h"



ostream & operator << (ostream & os, LExpr & expr) {
  os << expr.toString();
  return os; 
}

bool LExpr::solve()
{
	VarMap vars = getVars();
	int size = vars.size();
	int no_perms = pow(2, size);

	for (int i = 0; i < no_perms; i++)
	{
		VarMap::iterator it;
		int j = 0;

		for (it = vars.begin(); it != vars.end(); it++ )
		{
			// Get the jth bit of i
			// This works because each bit in i represents the value of one of the
			// LVars in vars and the "+ 1" is necessary because in the LValue 
			// enum true is 1 and false is 2
			it->second->setValue(static_cast<LValue>(((i & ( 1 << j )) >> j) + 1));
			j++;
		}
		if (evaluate() == tt) return true;
	}
	return false;

}