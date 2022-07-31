#include <stdio.h>

int lower_bound(int arr[], int N, int X){
	int mid;
	int low = 0;
	int high = N;

	while (low < high) {
		mid = low + (high - low) / 2;
		if (X <= arr[mid])
			high = mid;
		else 
			low = mid + 1;
	}

	// if X is greater than arr[n-1]
	if(low < N && arr[low] < X)   // like we  return the end() pointer in case of stl
	    low++;
	
	return low;
}

int upper_bound(int arr[], int N, int X){
	int mid;
	int low = 0;
	int high = N;
	while (low < high) {
		mid = low + (high - low) / 2;
		if (X >= arr[mid]) 
			low = mid + 1;
		else 
			high = mid;
	}

	// if X is greater than arr[n-1]
	if(low < N && arr[low] <= X)  // like we return the end() pointer in case of stl
	    low++;
	
	return low;
}

void printBound(int arr[], int N, int X){
	int idx;
	if (lower_bound(arr, N, X) == N) {
		printf("Lower bound doesn't exist");
	}
	else {
		idx = lower_bound(arr, N, X);
		printf("Lower bound of %d is % d at index % d\n", X, arr[idx], idx);
	}

	if (upper_bound(arr, N, X) == N) {
		printf("Upper bound doesn't exist");
	}
	else {
		idx = upper_bound(arr, N, X);
		printf("Upper bound of %d is % d at index % d\n", X, arr[idx], idx);
	}
}

int main(){
	int arr[] = { 4, 6, 10, 12, 18, 20 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int X = 6;
	printBound(arr, N, X);
	return 0;
}