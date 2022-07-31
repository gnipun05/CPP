#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

vector<int> arr;
int Size;
int capacity;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}

void minHeap(int c){
    capacity=c;
    Size=0;
}

int leftChild(int i){
    return 2*i+1;
}
int rightChild(int i){
    return 2*i+2;
}
int parent(int i){
    return floor((i-1)*2);
}


void minHeapify(int i){
    int left=leftChild(i);
    int right=rightChild(i);
    int smallest=i;
    if(left<Size && arr[smallest]>arr[left])
        smallest=left;
    if(right<Size && arr[smallest]>arr[right])
        smallest=right;
    if(smallest!=i){
        swap(arr[smallest], arr[i]);
        minHeapify(smallest);
    }
}

// getMin is a constatn time operation, as the minimum value is present on the zero index of the given array
// like top() function in cpp gives the minimum value in the minHeap Priority Queue

// in Extract Minimum, the smallest number is removed from the MinHeap
// Time complexity is same as that of minHeapify + O(1)
int extractMin(){
    if(Size==0)
        return INT_MAX;
    if(Size==1){
        Size--;
        return arr[0];
    }
    swap(arr[0], arr[Size-1]);
    Size--;
    minHeapify(0);
    return arr[Size]; // this is actually the minimum element which was present at the top of heap before being swapped
}