/**
/**��ջʹ�÷���
**/

#include <stack>
#include <iostream>
using namespace std;

int main() {
	//����ջ 
	stack<int> s;
	//Ԫ����ջ 
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(9);
	//��ȡջ��Ԫ��
	cout << s.top() << endl;
	//���ض�ջԪ������
	cout << s.size() << endl;
	//�ж��Ƿ�Ϊ��
	cout << s.empty() << endl;
	//����Ԫ�س�ջ
	while(s.empty() != true) {
		cout << s.top() << " ";
		s.pop();
	} 
	cout << endl;
	return 0;
} 