/**
** �õ���������vectorԪ��
**/

#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v(3);
	v[0] = 2;
	v[1] = 3;
	v[2] = 4;
	//�������������
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	} 
	cout << endl;
	return 0; 
} 