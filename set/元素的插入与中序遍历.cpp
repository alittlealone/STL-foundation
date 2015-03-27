/**
** 元素的插入与中序遍历 
**/ 

#include <set>
#include <iostream>
using namespace std;

int main() {
	set<int> s;
	//插入了5个元素，但由于8有重复，第2次插入的8并没有执行
	s.insert(8);
	s.insert(1);
	s.insert(12);
	s.insert(6);
	s.insert(8);
	//中序遍历集合中元素
	set<int>::iterator it;
	for(it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	} 
	cout << endl;
	return 0;
}