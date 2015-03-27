/**
** 元素的检索 
**/ 

#include <set>
#include <iostream>
using namespace std;

int main() {
	set<int> s;
	s.insert(8);
	s.insert(1);
	s.insert(12);
	s.insert(6);
	s.insert(8);
	set<int>::iterator it;
	//查找键值为6的元素
	//如果找到，则返回键值的迭代器位置，若找不到，则返回集合最后一个元素的后面一个位置,即end() 
	it = s.find(6);
	if(it != s.end()) 
		cout << *it << endl;
	else
		cout << "not found" << endl;
	//查找键值为20的元素
	it = s.find(20);
	if(it != s.end())
		cout << *it << endl;
	else
		cout << "not found" << endl;
	return 0; 
}