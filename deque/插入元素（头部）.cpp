/**
** ����Ԫ�أ�ͷ���� 
**/

#include <deque>
#include <iostream>
using namespace std;

int main() {
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_front(10);
	d.push_front(20); 
	deque<int>::iterator it;
	for(it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	return 0;
} 