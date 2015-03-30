/**
** Êı×ÖÓ³ÕÕ×Ö·ûµÄmapĞ´·¨ 
**/

#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
	map<int, char> m;
	m[0] = '0';
	m[1] = '1';
	m[2] = '2';
	m[3] = '3';
	m[4] = '4';
	m[5] = '5';
	m[6] = '6';
	m[7] = '7';
	m[8] = '8';
	m[9] = '9';
 	int n = 7;
 	string s = "The number is ";
 	cout << s + m[n] << endl;
	return 0;
} 