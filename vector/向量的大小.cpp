/**
** �����Ĵ�С
**/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	vector<int> v(10);
	for(int i = 0; i < 10; i++) {
		v[i] = i;
	}
	//���������С
	cout << v.size() << endl;
	//��������Ƿ�Ϊ�գ�Ϊ�շ���1
	cout << v.empty() << endl;
	v.clear();
	cout << v.empty() << endl;
	return 0; 
} 