/**
** string����ıȽ� 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "cat dog cat";
	//s�󣬷���1 
	//���ҵı������Ϸ���8������Ϊ��ca�Ƚϣ�����9 
	cout << s.compare("cat") << endl;
	//��ȣ�����0 
	cout << s.compare("cat dog cat") << endl;
	//sС������-1 
	cout << s.compare("dog") << endl;
	return 0;
}