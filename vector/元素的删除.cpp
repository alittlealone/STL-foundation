/**
** Ԫ�ص�ɾ��
**/

#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v(10);
	//��������ֵ
	for(int i = 0; i < 10; i++) {
		v[i] = i;
	} 
	//ɾ����2��Ԫ�أ���0��ʼ����
	v.erase(v.begin() + 2);
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	} 
	cout << endl;
	//ɾ����������1��5���������ֵ
	v.erase(v.begin() + 1, v.begin() + 5);
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	} 
	cout << endl;
	//������� 
	v.clear();
	//���������С 
	cout << v.size() << endl;
	return 0;
}