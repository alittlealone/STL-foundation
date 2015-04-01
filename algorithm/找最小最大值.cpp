/**
** 找最小最大值min_element/max_element 
**/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	for(int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	vector<int>::iterator min_it = min_element(v.begin(), v.end());
	vector<int>::iterator max_it = max_element(v.begin(), v.end());
	cout << "Min is " << *min_it << endl;
	cout << "Max is " << *max_it << endl;
	return 0;
}