/**
** 使用sort算法对向量元素排序
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
	//输出排序前的值
	for(i = 0; i < 10; i++) {
		cout << v[i] << " ";
	} 
	cout << endl;
	//升序排序
	sort(v.begin(), v.end());
	for(i = 0; i < 10; i++) {
		cout << v[i] << " ";
	} 
	cout << endl;
	return 0;
} 