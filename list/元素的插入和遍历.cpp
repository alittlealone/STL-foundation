/**
** 元素的插入和遍历 
**/

#include <list>
#include <iostream>
using namespace std;

int main() {
	list<int> l;
	//在链表尾部插入新元素
	l.push_back(2);
	l.push_back(1);
	l.push_back(5);
	//在链表头部插入新元素
	l.push_front(8);
	//在任意位置插入新元素
	list<int>::iterator it;
	it = l.begin();
	it++; //链表迭代器只能进行++和--，不能进行+n操作
	l.insert(it, 20);
	//前向遍历
	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	} 
 	cout << endl;
 	return 0;
} 