/**
** 元素反向遍历 
**/

#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
	map<int, char> m;
	m[25] = 'm';
	m[28] = 'k';
	m[10] = 'x';
	m[30] = 'a';
	map<int, char>::reverse_iterator rit;
	for(rit = m.rbegin(); rit != m.rend(); rit++) {
		cout << (*rit).first << " : " << (*rit).second << endl;
	}
	return 0;
} 