/**
** ɾ��string�����Ԫ��
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "abc123456";
	string::iterator it = s.begin();
	//ɾ����3��Ԫ��
	s.erase(it + 3);
	cout << s << endl;
	//ɾ��0-4��������Ԫ��
	s.erase(it, it + 4);
	cout << s << endl;
	//����ַ���
	s = "";
	cout << s.length() << endl;
	return 0; 
}