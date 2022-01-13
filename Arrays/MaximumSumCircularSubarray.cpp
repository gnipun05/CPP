// Time Complexity is Theta(n)

#include <bits/stdc++.h>
using namespace std;

int kedane(int arr[], int n)
{
    int currentsum=0;
    int maximum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        currentsum+=arr[i];

        maximum=max(maximum,currentsum);

        if(currentsum<0)
            currentsum=0;
    }
    return maximum;
}

int maxcircularsubarray(int arr[], int n)
{
    int wrapsum=0, nonwrapsum=0;

    nonwrapsum=kedane(arr,n); // this calculates Normal Subarray Sum

    if(nonwrapsum<0) //If all the elements of an array are negative then Kedane's Algo will return the number with smallest absolute value
        return nonwrapsum;

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapsum=sum+kedane(arr,n); // with the passing of inverted element in kedane and adding with total sum, this calculates Circular Subarray Sum

    return max(nonwrapsum,wrapsum); // We return the maximum of Normal and Circualar Sub-Array Sum
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int answer=maxcircularsubarray(arr,n);

    cout << answer;

    return 0;
}

/*
// the solution is very similar to my previous submission
// its a bit better because it has only one traversal of array
// it also works on kedane's algo to find subarray sum

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        if(A.size() == 0) return 0;
        int sum = A[0];
        int maxSoFar = A[0];
        int maxTotal = A[0];
        int minSoFar = A[0];
        int minTotal = A[0];
        for(int i = 1; i< A.size();i++){
            maxSoFar = max(A[i], maxSoFar + A[i]);
            maxTotal = max(maxTotal, maxSoFar); // this is kedanes algo for +ve numbers (Maximum Subarray Sum of vector A)
            
            minSoFar = min(A[i], minSoFar + A[i]);
            minTotal = min(minTotal, minSoFar); // this is kedanes algo for -ve numbers (Minimum Subarray Sum of vector A)
            
            sum += A[i];
        }
        if(sum == minTotal) return maxTotal;  // if all the numbers are negative
        return max(sum - minTotal, maxTotal);
    }
};
*/