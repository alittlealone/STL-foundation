/**
** queue使用方法
**/

#include <queue>
#include <iostream> 
using namespace std;

int main() {
	//定义队列 
	queue<int> q;
	//入队，即插入元素
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(9);
	//返回队列元素数量
	cout << q.size() << endl;
	//队列是否为空，空为真
	cout << q.empty() << endl;
	//读取队首
	cout << q.front() << endl;
	//读取队尾
	cout << q.back() << endl;
	//所有元素出列
	while(q.empty() != true) {
		cout << q.front() << " "; 
		q.pop();
	}
	cout << endl;
	return 0;
}