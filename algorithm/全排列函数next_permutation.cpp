/**
** 全排列函数next_permutation 
**/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<char> a;
    a.push_back('a');
    a.push_back('b');
    a.push_back('c');
    sort(a.begin(), a.end());
    vector<char>::iterator it;
    //语法next_permutation(start, end);start end为头尾指针 
    do{
		for(it = a.begin(); it != a.end(); it++) {
			cout << *it << " " ;
		}
		cout << endl;
	}while (next_permutation(a.begin(), a.end())); 
	//若先做while会少输出排列abc 
    return 0;
}