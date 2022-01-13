#include <bits/stdc++.h>
using namespace std;

long long int step12comp(long long int a, long long int b){

    if(a>0 && b>0)
    {
        long long int aDecrCount = a/3;
        if(b - aDecrCount <= 0){
            return b;
        }
        
        if(a%3 == 1 && b-aDecrCount>=3){
            return aDecrCount + 1;
        }

        if(a%3 == 2){
            if(b-aDecrCount >= 6){
                return aDecrCount + 2;
            }
            else if(b-aDecrCount >=2){
                return aDecrCount + 1;
            }
        }

        return aDecrCount;
    }
    
    return 0;
}

long long int step3comp(long long int a, long long int b){

    if(a>0 && b>0)
    {
        long long int aDecrCount = a/2;
        if(b - aDecrCount*2 <= 0){
            return b/2;
        }
        
        if(a%2 == 1 && b-aDecrCount*2>=3){
            return aDecrCount + 1;
        }

        return aDecrCount;
    }
    
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        long long int a, b, c=0;
        cin >> a >> b;\

        
        long long int res1 = step12comp(a, b);
        long long int res2 = step12comp(b, a);
        long long int res3 = step3comp(a, b);
        long long int res4 = step3comp(b, a);
        res4 = max(res3, res4);
        c = max(res1,res2);
        c = max(c, res4);
        cout << c << endl;
        t--;
    }
    return 0;
}