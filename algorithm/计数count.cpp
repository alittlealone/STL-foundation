/**
** 计数count
**/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isEven(int n) {
	return n % 2 == 0;
}

int main() {
	vector<int> v(5);
	v[0] = 0;
	v[1] = 1;
	v[2] = 2;
	v[3] = 4;
	v[4] = 4;
	//以下是错误的，必须指明统计条件 
	//int c = count(v.begin(), v.end());
	//cout << c << endl;
	//统计值等于4的元素的个数 
	int cc = count(v.begin(), v.end(), 4); 
	cout << cc << endl;
	//统计满足函数isEven的元素个数 
	int ccc = count_if(v.begin(), v.end(), isEven); 
	cout << ccc << endl;
	return 0;
} 