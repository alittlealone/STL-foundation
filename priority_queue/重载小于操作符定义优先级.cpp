/**
** ����"<"�������������ȼ�
**/

#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct Info {
	string name;
	float score;
	bool operator < (const Info &a) const {
		//����С��������
		return a.score < score; 
	}
};

int main() {
	priority_queue<Info> pq;
	Info info;
	info.name = "Jack";
	info.score = 68.5;
	pq.push(info);
	info.name = "Bomi";
	info.score = 18.5;
	pq.push(info);
	info.name = "Peti";
	info.score = 90;
	pq.push(info);
	while(pq.empty() != true) {
		cout << pq.top().name << " : " << pq.top().score << endl;
		pq.pop();
	}
	return 0;
} 