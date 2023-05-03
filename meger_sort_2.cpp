#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
	int i, j, k;
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1], R[n2];
	for(i=0; i<n1; i++) L[i] = arr[l+i];
	for(j=0; j<n2; j++) R[j] = arr[m+1+j];
	i=0, j=0, k=l;
	while(i<n1 && j<n2) {
	(L[i] <= R[j])  ? arr[k] = L[i++] : arr[k] = R[j++];
	k++;
    }
    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];
}


void merge_sort(int arr[], int l, int r) {
	if(l < r) {
		int mid = l + (r-l)/2;
		merge_sort(arr, l, mid);
		merge_sort(arr, mid+1, r);
		merge(arr, l, mid, r);
	}
}
int main() {
	   int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
   
     
    merge_sort(arr, 0, arr_size - 1);
    printf("\nSorted array:\n");
    for(int i=0; i<arr_size; i++) {
    	cout << arr[i] << " ";
	}
}
