/**
** ·´Ïò±éÀú 
**/

#include <list>
#include <iostream>
using namespace std;

int main() {
	list<int> l;
	l.push_back(2);
	l.push_back(1);
	l.push_back(5);
	list<int>::reverse_iterator rit;
	for(rit = l.rbegin(); rit != l.rend(); rit++) {
		cout << *rit << " ";
	}
	cout << endl;
	return 0;
} 