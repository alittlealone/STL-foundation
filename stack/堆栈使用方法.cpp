/**
/**堆栈使用方法
**/

#include <stack>
#include <iostream>
using namespace std;

int main() {
	//定义栈 
	stack<int> s;
	//元素入栈 
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(9);
	//读取栈顶元素
	cout << s.top() << endl;
	//返回堆栈元素数量
	cout << s.size() << endl;
	//判断是否为空
	cout << s.empty() << endl;
	//所有元素出栈
	while(s.empty() != true) {
		cout << s.top() << " ";
		s.pop();
	} 
	cout << endl;
	return 0;
} 