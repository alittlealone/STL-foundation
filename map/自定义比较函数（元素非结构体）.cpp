/**
** �Զ���ȽϺ�����Ԫ�طǽṹ�壩 
**/

#include <map>
#include <string>
#include <iostream>
using namespace std;

//�Զ���ȽϺ���myComp
struct myComp {
	bool operator()(const int &a, const int &b) {
		if(a != b) return a > b;
		else return a > b;
	}
};

int main() {
	map<int, char, myComp> m;
	m[25] = 'm';
	m[28] = 'k';
	m[10] = 'x';
	m[30] = 'a';
	map<int, char>::iterator it;
	for(it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " : " << (*it).second << endl;
	}
	return 0;
} 