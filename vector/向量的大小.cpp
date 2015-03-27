/**
** 向量的大小
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
	//输出向量大小
	cout << v.size() << endl;
	//输出向量是否为空，为空返回1
	cout << v.empty() << endl;
	v.clear();
	cout << v.empty() << endl;
	return 0; 
} 