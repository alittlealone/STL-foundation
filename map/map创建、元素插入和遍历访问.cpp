/**
** map创建、元素插入和遍历访问 
**/ 

#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
	map<string, float> m;
	m["Jack"] = 98.5;
	m["Bomi"] = 96.0;
	m["Kate"] = 97.5;
	map<string, float>::iterator it;
	for(it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " : " << (*it).second << endl;
	}
	return 0;
}