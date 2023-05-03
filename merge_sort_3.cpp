#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
	int i, j, k;
	int n1 = mid-l+1;
	int n2 = r-mid;
	int L[n1], R[n2];
	for(i=0; i<n1;i++) L[i] = arr[l+i];
	for(j=0; j<n2;j++) R[j] =  arr[mid+j+1];
	i=0, j=0, k=l;
	while(i<n1 && j<n2) L[i]<R[j] ? arr[k]=L[i++] : arr[k]=R[j++], k++;
	while(i<n1) arr[k++] = L[i++];
	while(j<n2) arr[k++] = R[j++];
}

void merge_sort(int arr[], int l, int r) {
	if(l<r) {
		int mid = l + (r-l)/2;
	    merge_sort(arr, l, mid);
	    merge_sort(arr, mid+1, r);
	    merge(arr, l, mid, r);
	}
}

int main() {
	int arr[] = { 1, 2, 4, 3, 5, 8, 7, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	merge_sort(arr, 0, n-1);
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
}
