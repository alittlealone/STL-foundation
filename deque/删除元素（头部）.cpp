/**
** ɾ��Ԫ�أ�ͷ���� 
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
	//��ͷ��ɾ��Ԫ�� 
	d.pop_front();
	d.pop_front();
	deque<int>::iterator it;
	for(it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl; 
	return 0;
}