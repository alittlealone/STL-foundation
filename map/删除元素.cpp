/**
** É¾³ıÔªËØ 
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
	m.erase(28);
	map<int, char>::iterator it;
	for(it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " : " << (*it).second << endl;
	}
	return 0;
} 