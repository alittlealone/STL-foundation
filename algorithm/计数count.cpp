/**
** ����count
**/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isEven(int n) {
	return n % 2 == 0;
}

int main() {
	vector<int> v(5);
	v[0] = 0;
	v[1] = 1;
	v[2] = 2;
	v[3] = 4;
	v[4] = 4;
	//�����Ǵ���ģ�����ָ��ͳ������ 
	//int c = count(v.begin(), v.end());
	//cout << c << endl;
	//ͳ��ֵ����4��Ԫ�صĸ��� 
	int cc = count(v.begin(), v.end(), 4); 
	cout << cc << endl;
	//ͳ�����㺯��isEven��Ԫ�ظ��� 
	int ccc = count_if(v.begin(), v.end(), isEven); 
	cout << ccc << endl;
	return 0;
} 