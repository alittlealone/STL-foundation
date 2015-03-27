/**
** 下标方式访问vector元素 
**/

#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v(3);
	v[0] = 2;
	v[1] = 3;
	v[2] = 4;
	cout << v[0] << " " << v[1] << " " << v[2] << endl;
	return 0; 
}