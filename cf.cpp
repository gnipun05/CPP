#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

void solve(){
        int n;
        cin>>n;
        ll a[n], b[n];
        for(int i=0; i<n;i++)
                cin>>a[i];
        for(int j=0; j<n; j++)
                cin>>b[j];
        // // for(int i=0; i<n; i++)
        // //         a[i]=a[i]+b[i];
        // // ll sum=0;
        // // for(int i=1; i<n; i++){
        // //         sum+=abs(a[i]-a[i-1]);
        // // }
        ll sum=0;
        for(int i=1; i<n;i++){
                sum+=min(abs(a[i]-a[i-1])+abs(b[i]-b[i-1]),abs(a[i]-b[i-1])+abs(b[i]-a[i-1]));
                // for(int i=1; i<n; i++)
                //         sum+=abs(a[i]-a[i-1]);
        }
        cout<<sum<<endl;
        // int arr[n];
        // for(int i=0;i<n;i++)
        //         cin>>arr[i];
        // for(int i=0;i<n;i++){
        //         int count=0;
        //         while((arr[i]*2)<=32768){
        //                 arr[i]=arr[i]*2;
        //                 count++;
        //         }
        //         // count+=32768-arr[i];
        //         cout<<count<<" ";
        // }
        // cout<<endl;
        return;
}

int main(){
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin>>t;
        while(t--)
                solve();
        return 0;
}