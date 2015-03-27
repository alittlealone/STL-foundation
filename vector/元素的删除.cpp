/**
** 元素的删除
**/

#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v(10);
	//给向量赋值
	for(int i = 0; i < 10; i++) {
		v[i] = i;
	} 
	//删除第2个元素，从0开始计数
	v.erase(v.begin() + 2);
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	} 
	cout << endl;
	//删除迭代器第1到5区间的所有值
	v.erase(v.begin() + 1, v.begin() + 5);
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	} 
	cout << endl;
	//清空向量 
	v.clear();
	//输出向量大小 
	cout << v.size() << endl;
	return 0;
}