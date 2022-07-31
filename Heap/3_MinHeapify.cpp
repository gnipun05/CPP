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


// in Min-Heapify, an assumption is made that only one node in the whole Heap is wrongly located
// Worst case - theta(H) ; H - height of heap
// Best case - theta(1)
// Therefore Time Complexity is O(logN)
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