/**
** Ԫ�صĲ������������ 
**/ 

#include <set>
#include <iostream>
using namespace std;

int main() {
	set<int> s;
	//������5��Ԫ�أ�������8���ظ�����2�β����8��û��ִ��
	s.insert(8);
	s.insert(1);
	s.insert(12);
	s.insert(6);
	s.insert(8);
	//�������������Ԫ��
	set<int>::iterator it;
	for(it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	} 
	cout << endl;
	return 0;
}