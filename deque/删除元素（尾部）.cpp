/**
** ɾ��Ԫ�أ�β���� 
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
	//��β��ɾ��Ԫ�� 
	d.pop_back();
	d.pop_back();
	deque<int>::iterator it;
	for(it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl; 
	return 0;
}