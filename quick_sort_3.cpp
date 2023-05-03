#include<bits/stdc++.h>
using namespace std;

int parition(int arr[], int low, int high) {
	int pivot = arr[high];
	int left = low;
	int right = high-1;
	while(true) {
 	while(left <= right && arr[left] < pivot) left++;
	while(left <= right && arr[right] > pivot) right--;
	if(left>=right) break;
	swap(arr[left++], arr[right--]);
	}
   swap(arr[left], arr[high]);
   return left;

}

void quick_sort(int arr[], int low, int high) {
	if(low<high) {
		int pi = parition(arr, low, high);
		quick_sort(arr, low, pi-1);
		quick_sort(arr, pi+1, high);
	}
}
int main() {
	int arr[] = { 1, 2, 4, 3, 5, 8, 7, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	quick_sort(arr, 0, n-1);
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
}
