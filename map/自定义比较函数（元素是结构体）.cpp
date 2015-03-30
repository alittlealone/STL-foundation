/**
** �Զ���ȽϺ�����Ԫ���ǽṹ�壩 
**/

#include <map>
#include <string>
#include <iostream>
using namespace std;

struct Info {
	string name;
	float score;
	//����"<"���������Զ����������
	bool operator < (const Info &a) const {
		//�Ӵ�С����
		return a.score < score; 
	} 
};

int main() {
	map<Info, int> m;
	Info info;
	info.name = "Jack";
	info.score= 60;
	m[info] = 25;
	info.name = "Bomi";
	info.score = 80;
	m[info] = 10;
	info.name = "Peti";
	info.score = 66.5;
	m[info] = 30;
	map<Info, int>::iterator it;
	for(it = m.begin(); it != m.end(); it++) {
		cout << (*it).second << " : ";
		cout << ((*it).first).name << " " << ((*it).first).score << endl;
	} 
	return 0;
}  