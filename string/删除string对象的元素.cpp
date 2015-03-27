/**
** 删除string对象的元素
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "abc123456";
	string::iterator it = s.begin();
	//删除第3个元素
	s.erase(it + 3);
	cout << s << endl;
	//删除0-4区间所有元素
	s.erase(it, it + 4);
	cout << s << endl;
	//清空字符串
	s = "";
	cout << s.length() << endl;
	return 0; 
}