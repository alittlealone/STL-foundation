/**
** ���Ԫ�� 
**/ 

#include <bitset>
#include <iostream>
using namespace std;

int main() {
	bitset<10> b;
	b.set();
	b.set(0, 0);
	b.set(2, 0);
	b.set(3, 0);
	b.set(4, 0);
	b.set(5, 0);
	b.set(7, 0);
	b.set(8, 0);
	//�±귨�������Ԫ��
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//ֱ����������������Ԫ��
	cout << b << endl; 
	return 0;
} 