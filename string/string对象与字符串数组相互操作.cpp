/**
** string�������ַ��������໥���� 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	char ss[100];
	//�����ַ������ַ�������
	scanf("%s", &ss);
	s = ss;
	//��printf����ַ�������Ҫ����c_str()����
	printf(s.c_str());
	cout << endl;
	printf("%s", ss);
	cout << endl;
	cout << s << endl;
	cout << ss << endl;
	return 0;
} 