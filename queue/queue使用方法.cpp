/**
** queueʹ�÷���
**/

#include <queue>
#include <iostream> 
using namespace std;

int main() {
	//������� 
	queue<int> q;
	//��ӣ�������Ԫ��
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(9);
	//���ض���Ԫ������
	cout << q.size() << endl;
	//�����Ƿ�Ϊ�գ���Ϊ��
	cout << q.empty() << endl;
	//��ȡ����
	cout << q.front() << endl;
	//��ȡ��β
	cout << q.back() << endl;
	//����Ԫ�س���
	while(q.empty() != true) {
		cout << q.front() << " "; 
		q.pop();
	}
	cout << endl;
	return 0;
}