/**
** ɾ��Ԫ�أ���գ� 
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
	//��� 
	d.clear();
	//���Ԫ�ظ��� 
	cout << d.size() << endl;
	return 0;
}