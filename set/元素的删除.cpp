/**
** Ԫ�ص�ɾ�� 
**/ 

#include <set>
#include <iostream>
using namespace std;

int main() {
	set<int> s;
	s.insert(8);
	s.insert(1);
	s.insert(12);
	s.insert(6);
	s.insert(8);
	//ɾ����ֵΪ6��Ԫ��
	s.erase(6);
	//�������
	set<int>::reverse_iterator rit;
	for(rit = s.rbegin(); rit != s.rend(); rit++) {
		cout << *rit << " ";
	} 
	cout << endl;
	s.clear();
	cout << s.size() << endl;
	return 0;
}