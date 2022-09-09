#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

void solve(){
        int r,c;
        cin>>r>>c;
        char arr[r][c];
        bool flag=false;
        for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                        char temp;
                        cin>>temp;
                        if(temp=='^')
                                flag=true;
                        arr[i][j]=temp;
                }
        }
        if((r==1 || c==1)){
                if(flag){
                        cout<<"Impossible"<<endl;
                }
                else{
                        cout<<"Possible"<<endl;
                        for(int i=0; i<r; i++){
                                for(int j=0; j<c; j++)
                                        cout<<arr[i][j];
                                cout<<endl;
                        }
                }
                return;
        }
        
        cout<<"Possible"<<endl;
        for(int i=0; i<r; i++){
                for(int j=0; j<c; j++)
                        cout<<"^";
                cout<<endl;
        }
        return;
}

int main(){
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin>>t;
        for(int i=1; i<=t; i++){
                cout<<"Case #"<<i<<": ";
                solve();
        }
        return 0;
}