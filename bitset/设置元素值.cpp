/**
** ����Ԫ��ֵ 
**/ 

#include <bitset>
#include <iostream>
using namespace std;

int main() {
	bitset<10> b;
	//�����±귨��Ԫ�ظ�ֵ
	b[1] = 1;
	b[6] = 1;
	b[9] = 1;
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//����set()������������Ԫ��ֵ����Ϊ1
	b.set();
 	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//����set(pos)������Ϊĳposλ��ֵ 
	b.set(1, 0);
 	b.set(6, 0);
 	b.set(9, 0);
 	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//����reset(pos)��������ĳposλ��ֵΪ0
	b.reset(1);
	b.reset(2);
	b.reset(6);
	b.reset(9); 
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//����λ��λȡ��
	b.flip();
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl; 
	//��ĳλȡ��
	b.flip(2);
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl; 
	return 0;
} 