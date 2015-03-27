/**
** 元素的插入
**/

#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v(3);
	v[0] = 2;
	v[1] = 3;
	v[2] = 4;
	//在最前面插入新元素8
	v.insert(v.begin(), 8);
	//在第2个元素前插入新元素1
	v.insert(v.begin() + 2, 1);
	//在末尾追加新元素6
	v.insert(v.end(), 6);
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << "　";
	} 
	cout << endl;
	return 0; 
} 