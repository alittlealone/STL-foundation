/**
** Ԫ�ص����� 
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
	map<int, char>::iterator it;
	it = m.find(28);
	//�������ü�ֵ 
	if(it != m.end()) {
		cout << (*it).first << " : " << (*it).second << endl;
	}else {
		cout << "not found" << endl;
	}
	return 0;
} 