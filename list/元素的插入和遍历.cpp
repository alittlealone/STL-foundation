/**
** Ԫ�صĲ���ͱ��� 
**/

#include <list>
#include <iostream>
using namespace std;

int main() {
	list<int> l;
	//������β��������Ԫ��
	l.push_back(2);
	l.push_back(1);
	l.push_back(5);
	//������ͷ��������Ԫ��
	l.push_front(8);
	//������λ�ò�����Ԫ��
	list<int>::iterator it;
	it = l.begin();
	it++; //���������ֻ�ܽ���++��--�����ܽ���+n����
	l.insert(it, 20);
	//ǰ�����
	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	} 
 	cout << endl;
 	return 0;
} 