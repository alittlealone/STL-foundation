/**
** 自定义比较函数（元素不是结构体） 
**/ 

#include <set>
#include <iostream>
using namespace std;

//自定义比较函数myComp，重载"()"操作符
struct myComp {
	bool operator()(const int &a, const int &b) {
		if(a != b)
			return a > b;
		else
			return a > b;
	}
};

int main() {
	//采用比较方法为myComp 
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