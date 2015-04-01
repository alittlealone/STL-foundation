/**
** ±éÀúfor_each
**/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printElem(int& elem) {
	cout << elem << " ";
}

int main() {
	int a[] = {1, 2, 3};
	vector<int> vec(a, a + sizeof(a) / sizeof(int));  
	for_each(vec.begin(), vec.end(), printElem);
	cout << endl;
	return 0;
} 