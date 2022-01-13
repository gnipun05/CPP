/* The Child and Set :- https://codeforces.com/contest/437/problem/B */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum,limit;
    cin>>sum>>limit;
    
    int answers[limit], index=-1, i;

    for(i=limit; i>0; i--) // if the full loop runs  (i.e. i becomes 0), then it means no set exist whose addition = given sum
    {
        int rightMostBit=i&(-i);
        sum-=rightMostBit;
        if(sum>0)
        {   index++;
            answers[index]=i;
        }        
        else if(sum==0)
        {   index++;
            answers[index]=i;
            break;   
        }
        else // when sum<0
        {
            sum+=rightMostBit;
        }
    }
    
    if(i==0)
    {
        cout << "-1" << endl;
        return 0;
    }

    cout << index+1 << endl;
    for(int i=0; i<=index; i++)
        cout << answers[i] << " ";
    return 0;
}