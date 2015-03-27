/**
** 使用 reverse 反向排列算法
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
	//反向排列向量
	reverse(v.begin(), v.end());
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	} 
	cout << endl;
	return 0;
} 