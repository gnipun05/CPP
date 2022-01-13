#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll a,b,c=0, diff=0;
        cin>>a>>b;
        diff=abs(a-b);
        c+=min(diff/2, min(a,b));
        if(a>b){
            a-=3*c;
            b-=c;
        } else {
            a-=c;
            b-=3*c;
        }
        c+=max((min(a,b)/2), (ll)0);
        cout<<c<<endl;
    }
}