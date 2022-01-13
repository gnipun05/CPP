/* Neko Performs Cat Furrier Transform :- https://codeforces.com/problemset/problem/1152/B */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin>>x;

    int leftMostBit=-1;
    while(1)
    {
        if(pow(2,(leftMostBit+1))>x)
            break;
        leftMostBit++;
    }

    int answers[leftMostBit];
    int count=1, index=0;
    for( ; leftMostBit>=0; leftMostBit--)
    {
        if(( x & (1<<leftMostBit))==0)
        {
            if(count%2==0)
            {
                x+=1;
                leftMostBit++; // if we don't write this, we will miss all the alternate bits
            }
            else
            {
                x=x^((int)pow(2,leftMostBit+1)-1);
                answers[index]= leftMostBit+1;
                index++;
            }
            count++;
        }
    }

    cout << count-1 << endl; // becaouse initial count was 1
    for(int i=0; i<index; i++)
        cout << answers[i] << " ";
        
    return 0;
}