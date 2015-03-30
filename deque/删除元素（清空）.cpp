/**
** 删除元素（清空） 
**/ 

#include <deque>
#include <iostream>
using namespace std;

int main() {
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);
	d.push_back(5);
	//清空 
	d.clear();
	//输出元素个数 
	cout << d.size() << endl;
	return 0;
}