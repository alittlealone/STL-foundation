/**
** ����string����ĳ���
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "abc123456";
	cout << s.length() << endl;
	s = "";
	cout << s.empty() << endl;
	return 0;
}