/**
** �Զ���ȽϺ�����Ԫ�ز��ǽṹ�壩 
**/ 

#include <set>
#include <iostream>
using namespace std;

//�Զ���ȽϺ���myComp������"()"������
struct myComp {
	bool operator()(const int &a, const int &b) {
		if(a != b)
			return a > b;
		else
			return a > b;
	}
};

int main() {
	//���ñȽϷ���ΪmyComp 
	set<int, myComp> s;
	s.insert(8);
	s.insert(1);
	s.insert(12);
	s.insert(6);
	s.insert(8);
	set<int, myComp>::iterator it;
	for(it = s.begin(); it != s.end(); it++) {
		cout << *it << " "; 
	}
	cout << endl;
	return 0;
}