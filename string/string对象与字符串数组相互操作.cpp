/**
** string对象与字符串数组相互操作 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	char ss[100];
	//输入字符串到字符数组中
	scanf("%s", &ss);
	s = ss;
	//用printf输出字符串对象，要采用c_str()方法
	printf(s.c_str());
	cout << endl;
	printf("%s", ss);
	cout << endl;
	cout << s << endl;
	cout << ss << endl;
	return 0;
} 