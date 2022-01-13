// CPP program to illustrate memset
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str[] = "geeksforgeeks";
	memset(str, 't', sizeof(str));
	cout << str<<endl;

	int arr[5][4];
	memset(arr, 0, sizeof(arr)); // only 0 and -1
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++)
			cout<<arr[i][j] <<" ";
		cout<<endl;
	}
	return 0;
}
