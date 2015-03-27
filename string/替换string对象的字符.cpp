/**
** 替换string对象的字符
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "abc123456";
	//从第3个开始，将连续的3个字符替换为"good"
	s.replace(3, 3, "good");
	cout << s << endl;
	return 0; 
}