/**
** ·´Ïò±éÀú 
**/ 

#include <deque>
#include <iostream>
using namespace std;

int main() {
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	deque<int>::reverse_iterator rit;
	for(rit = d.rbegin(); rit != d.rend(); rit++) {
		cout << *rit << " ";
	}
	return 0;
}