/**
** 元素插入 
**/ 

#include <set>
#include <string>
#include <iostream>
using namespace std;

int main() {
	multiset<string> ms;
	//multiset与set区别在于multiset中可以插入重复元素 
	ms.insert("abc");
	ms.insert("123");
	ms.insert("111");
	ms.insert("aaa");
	ms.insert("123");
	multiset<string>::iterator it;
	for(it = ms.begin(); it != ms.end(); it++) {
		cout << *it << endl;
	}	
	return 0;
}