/**
** Ԫ��ɾ�� 
**/ 

#include <set>
#include <string>
#include <iostream>
using namespace std;

int main() {
	multiset<string> ms;
	ms.insert("abc");
	ms.insert("123");
	ms.insert("111");
	ms.insert("aaa");
	ms.insert("123");
	multiset<string>::iterator it;
	for(it = ms.begin(); it != ms.end(); it++) {
		cout << *it << endl;
	}	
	//ɾ����ֵΪ"123"�������ظ�Ԫ�أ�����ɾ��Ԫ������ 
	int n = ms.erase("123");
	cout << "Total deleted: " << n << endl; 
	cout << "all elements after deleted: " << endl;
	for(it = ms.begin(); it != ms.end(); it++) {
		cout << *it << endl;
	}
	return 0;
}