/**
** string������ΪvectorԪ��
**/

#include <vector> 
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	vector<string> v;
	v.push_back("Jack");
	v.push_back("Mike");
	v.push_back("Tom");
	cout << v[0] << endl;
	cout << v[1] << endl;
	cout << v[2] << endl;
	cout << v[0][0] << endl;
	cout << v[1][0] << endl;
	cout << v[2].length() << endl;
	return 0; 
}