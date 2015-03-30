/**
** 重载"()"操作符定义优先级
**/

#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct myComp {
	bool operator () (const int &a, const int &b) {
		//按从小到大排列
		return a > b; 
	}
};

int main() {
	priority_queue<int, vector<int>, myComp> pq;
	pq.push(1);
	pq.push(9);
	pq.push(2);
	pq.push(30);
	while(pq.empty() != true) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;
} 