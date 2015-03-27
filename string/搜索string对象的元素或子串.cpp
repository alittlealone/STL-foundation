/**
** 搜索string对象的元素或子串 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "cat dog cat";
	cout << s.find('c') << endl;
	cout << s.find("c") << endl;
	cout << s.find("cat") << endl;
	cout << s.find("dog") << endl;
	cout << s.find("dogc") << endl;
	return 0;
}