/**
** 访问string对象的元素
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "abc123456";
	cout << s[0] << endl;
	cout << s[0] - 'a' << endl;
	return 0;
}