/**
** ÓÃreverse·´ÏòÅÅĞò 
**/

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	s = "123456789";
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}