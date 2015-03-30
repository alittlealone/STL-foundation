/**
** 设置元素值 
**/ 

#include <bitset>
#include <iostream>
using namespace std;

int main() {
	bitset<10> b;
	//采用下标法给元素赋值
	b[1] = 1;
	b[6] = 1;
	b[9] = 1;
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//采用set()方法，将所有元素值都变为1
	b.set();
 	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//采用set(pos)方法，为某pos位赋值 
	b.set(1, 0);
 	b.set(6, 0);
 	b.set(9, 0);
 	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//采用reset(pos)方法，将某pos位赋值为0
	b.reset(1);
	b.reset(2);
	b.reset(6);
	b.reset(9); 
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl;
	//所有位逐位取反
	b.flip();
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl; 
	//将某位取反
	b.flip(2);
	for(int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	} 
	cout << endl; 
	return 0;
} 