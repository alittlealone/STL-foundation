/**
** ²åÈëÔªËØ£¨Î²²¿£© 
**/

#include <deque>
#include <iostream>
using namespace std;

int main() {
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	cout << d[0] << " " << d[1] << " " << d[2] << endl;
	return 0;
} 