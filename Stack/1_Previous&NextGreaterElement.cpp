#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

void prevGreaterElement(vi &arr){
    int n=arr.size();
    stack<int>s;
    s.push(arr[0]);
    cout<<-1<<endl;
    for(int i=1; i<n; i++){
        while(s.empty()==false && s.top()<=arr[i])
            s.pop();
        int temp=(s.empty()==false)?-1:s.top();
        cout<<temp<<endl;
        s.push(arr[i]);
    }
}

void nextGreaterElement(vi &arr){
    int n=arr.size();
    stack<int>s;
    s.push(arr[n-1]);
    cout<<-1<<endl;
    for(int i=n-2; i>=0; i--){
        while(s.empty()==false && s.top()<=arr[i])
            s.pop();
        int temp=(s.empty()==false)?-1:s.top();
        cout<<temp<<endl;
        s.push(arr[i]);
    }
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}