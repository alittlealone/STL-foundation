/**
** �滻string������ַ�
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	s = "abc123456";
	//�ӵ�3����ʼ����������3���ַ��滻Ϊ"good"
	s.replace(3, 3, "good");
	cout << s << endl;
	return 0; 
}