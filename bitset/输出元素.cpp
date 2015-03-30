/**
** 输出元素 
**/ 

#include <bitset>
#include <iostream>
using namespace std;

int main() {
	bitset<10> b;
	b.set();
	b.set(0, 0);
	b.set(2, 0);
	b.set(3, 0);
	b.set(4, 0);
	b.set(5, 0);
	b.set(7, 0);
	b.set(8, 0);
	//下标法输出所有元素
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//直接向输出流输出所有元素
	cout << b << endl; 
	return 0;
} 