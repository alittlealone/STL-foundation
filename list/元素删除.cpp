/**
** Ԫ��ɾ�� 
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
	//ɾ��ֵ����1������Ԫ��
	l.remove(1);
 	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//ɾ����Ԫ��
	l.pop_front(); 
	//ɾ��βԪ��
	l.pop_back();
	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
 	//ɾ��������λ���ϵ�Ԫ��
	it = l.begin();
	it++;
	l.erase(it);
 	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//���
	l.clear();
	cout << l.size() << endl; 
	return 0;
}