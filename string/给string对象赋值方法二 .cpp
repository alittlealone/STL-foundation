/**
** ��string����ֵ������ 
**/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	char ss[5000];
	//scanf�����ٶȱ�cin��Ķ�
	//scanf��c���Ժ�������֧��string
	scanf("%s", &ss);
	//���ַ����鸳��string����
	s = ss;
	cout << s << endl;
	return 0; 
} 