/**
** 元素查找 
**/ 

#include <set>
#include <string>
#include <iostream>
using namespace std;

int main() {
	multiset<string> ms;
	ms.insert("abc");
	ms.insert("123");
	ms.insert("111");
	ms.insert("aaa");
	ms.insert("123");
	multiset<string>::iterator it;
	//查找键值"123"
	it = ms.find("123");
	if(it != ms.end())
		cout << *it << endl;
	else
		cout << "not found" << endl;
	it = ms.find("bbb");
	if(it != ms.end())
		cout << *it << endl;
	else
		cout << "not found" << endl;
	return 0;
}