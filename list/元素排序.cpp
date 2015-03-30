/**
** ÔªËØÅÅĞò
**/

#include <list>
#include <iostream>
using namespace std;

int main() {
	list<int> l;
	l.push_back(2);
	l.push_back(8);
	l.push_back(1);
	l.push_back(5);
	l.push_back(1);
	list<int>::iterator it;
	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//ÅÅĞò 
	l.sort();
	for(it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0; 
}