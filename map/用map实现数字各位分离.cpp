/**
** 用map实现数字各位分离 
**/

#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
	map<char, int> m;
	m['0'] = 0;
	m['1'] = 1;
 	m['2'] = 2;
 	m['3'] = 3;
 	m['4'] = 4;
 	m['5'] = 5;
 	m['6'] = 6;
 	m['7'] = 7;
 	m['8'] = 8;
 	m['9'] = 9;
 	
 	/**
 	上面的语句可以通过下面的循环实现
	 for(int j = 0; j < 10; j++) {
	 	m['0' + j] = j;
	 } 
 	**/
 	
 	string sa;
 	sa = "6234";
 	int i;
 	for(i = 0; i < sa.length(); i++) {
	 	cout << sa[i] << " ";
 	}
 	cout << endl;
	return 0;
} 