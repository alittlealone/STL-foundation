/**
** ����"()"�������������ȼ�
**/

#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct myComp {
	bool operator () (const int &a, const int &b) {
		//����С��������
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