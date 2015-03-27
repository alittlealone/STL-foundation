/**
** 给string对象插入字符 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "123456";
	string::iterator it;
	it = s.begin();
	//把字符插入到第1个字符前（从0开始）
	s.insert(it + 1, 'p');
	cout << s << endl;
	return 0; 
} 