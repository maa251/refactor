#include <map>
#include <string>
#include <iostream>
using namespace std;
#define map_insert(map, str, value) map.insert(pair<string, LValue>(str, value))

enum LValue {
  uu, tt, ff, 
};

int main()
{
	map<string, LValue> my_map = map<string, LValue>();
	map_insert(my_map, "k", tt);
	
	cout << my_map.size();
	return 0;
}