/**
** 优先队列使用方法 
**/ 

//优先队列与队列的区别是队列中最大的元素总是位于队首 

#include <queue>
#include <iostream>
using namespace std;

int main() {
	priority_queue<int> pq;
	pq.push(1);
	pq.push(2);
	pq.push(3);
	pq.push(9);
	cout << pq.size() << endl;
	while(pq.empty() != true) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;
}