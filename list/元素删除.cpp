/**
** 元素删除 
**/

#include <list>
#include <iostream>
using namespace std;

int main() {
	list<int> l;
	l.push_back(2);
	l.push_back(7);
	l.push_back(8);
	l.push_back(1);
	l.push_back(5);
	l.push_back(1);
	list<int>::iterator it;
	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//删除值等于1的所有元素
	l.remove(1);
 	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//删除首元素
	l.pop_front(); 
	//删除尾元素
	l.pop_back();
	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
 	//删除迭代器位置上的元素
	it = l.begin();
	it++;
	l.erase(it);
 	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//清空
	l.clear();
	cout << l.size() << endl; 
	return 0;
}