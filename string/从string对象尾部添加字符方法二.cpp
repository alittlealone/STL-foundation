/**
** 从string对象尾部添加字符方法二 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s.append("abc");
	s.append("123");
	cout << s << endl;
	return 0;
}