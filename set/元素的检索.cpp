/**
** Ԫ�صļ��� 
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
	set<int>::iterator it;
	//���Ҽ�ֵΪ6��Ԫ��
	//����ҵ����򷵻ؼ�ֵ�ĵ�����λ�ã����Ҳ������򷵻ؼ������һ��Ԫ�صĺ���һ��λ��,��end() 
	it = s.find(6);
	if(it != s.end()) 
		cout << *it << endl;
	else
		cout << "not found" << endl;
	//���Ҽ�ֵΪ20��Ԫ��
	it = s.find(20);
	if(it != s.end())
		cout << *it << endl;
	else
		cout << "not found" << endl;
	return 0; 
}