/**
** 给string对象赋值方法二 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	char ss[5000];
	//scanf输入速度比cin快的多
	//scanf是c语言函数，不支持string
	scanf("%s", &ss);
	//把字符数组赋给string对象
	s = ss;
	cout << s << endl;
	return 0; 
} 