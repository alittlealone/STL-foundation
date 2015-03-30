/**
** multmap对象创建元素插入 
**/

#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
	multimap<string, double> m;
	m.insert(pair<string, double>("Jack", 300.5));
	m.insert(pair<string, double>("Kity", 200));
	m.insert(pair<string, double>("Memi", 500));
	//multimap可以重复插入键值
 	m.insert(pair<string, double>("Jack", 306));
 	multimap<string, double>::iterator it;
 	for(it = m.begin(); it != m.end(); it++) {
	 	cout << (*it).first << " : " << (*it).second << endl;
	 }
	 return 0;
}