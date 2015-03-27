/**
** 自定义比较函数（元素是结构体） 
**/ 

#include <set>
#include <string> 
#include <iostream>
using namespace std;

struct Info {
	string name;
	float score;
	//重载"<"操作符，自定义排序规则
	bool operator < (const Info &a) const {
		return a.score < score; 
	} 
};

int main() {
	//元素类型为Info结构体的集合对象s
	set<Info> s;
	Info info;
	info.name = "Jack";
	info.score = 80.5;
	s.insert(info);
	info.name = "Tomi";
	info.score = 20.5;
	s.insert(info);
	info.name = "Nacy"; 
	info.score = 60.5;
	s.insert(info);
	set<Info>::iterator it;
	for(it = s.begin(); it != s.end(); it++) {
		cout << (*it).name << " : " << (*it).score << endl;
	}
	return 0;
}