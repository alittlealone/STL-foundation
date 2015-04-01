/**
** ����Ԫ��copy
**/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	vector<int> v1, v2;
	for(int i = 0; i <= 5; i++)  v1.push_back(10 * i);
	for(int i = 0; i <= 10; i++)  v2.push_back(3 * i);
	cout << "v1 = (";
	vector<int>::iterator it;
	for(it = v1.begin(); it != v1.end(); it++) cout << *it << " ";
	cout << ")" << endl;
	cout << "v2 = (";
	for(it = v2.begin(); it != v2.end(); it++) cout << *it << " ";
	cout << ")" << endl;
	//��v1ǰ����Ԫ�ظ��Ƶ�v2���м�,������Ӧλ��Ԫ�� 
	copy(v1.begin(), v1.begin()+3, v2.begin()+4);
	cout << "v2 with v1 insert = (";
	for(it = v2.begin(); it != v2.end(); it++) cout << *it << " ";
	cout << ")" << endl;
	//��v2�ڲ����ƣ�����2��ʾ����λ�ã�����λ�ò����븴��,������Ӧλ��Ԫ�� 
	copy(v2.begin()+4, v2.begin()+7, v2.begin()+2);
	cout << "v2 with shifted insert = (";
	for(it = v2.begin(); it != v2.end(); it++) cout << *it << " ";
	cout << ")" << endl; 
	return 0;
} 