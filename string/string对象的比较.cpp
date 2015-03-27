/**
** string对象的比较 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "cat dog cat";
	//s大，返回1 
	//在我的编译器上返回8，若改为和ca比较，返回9 
	cout << s.compare("cat") << endl;
	//相等，返回0 
	cout << s.compare("cat dog cat") << endl;
	//s小，返回-1 
	cout << s.compare("dog") << endl;
	return 0;
}