/**
** ��string��������ַ� 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "123456";
	string::iterator it;
	it = s.begin();
	//���ַ����뵽��1���ַ�ǰ����0��ʼ��
	s.insert(it + 1, 'p');
	cout << s << endl;
	return 0; 
} 