/**
** ʹ��sort�㷨������Ԫ������
**/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
	vector<int> v;
	int i;
	for(i = 0; i < 10; i++) {
		v.push_back(9 - i);
	}
	//�������ǰ��ֵ
	for(i = 0; i < 10; i++) {
		cout << v[i] << " ";
	} 
	cout << endl;
	//��������
	sort(v.begin(), v.end());
	for(i = 0; i < 10; i++) {
		cout << v[i] << " ";
	} 
	cout << endl;
	return 0;
} 