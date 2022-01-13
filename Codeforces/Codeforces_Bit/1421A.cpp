/* XORwice :- https://codeforces.com/problemset/problem/1421/A */

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
	{
		int a,b;
		cin>>a>>b;
		int result = a^b;
		cout<<result<<endl;
		t--;
	}
	return 0;
}