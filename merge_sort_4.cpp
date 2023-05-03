#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l,int m, int r) {
    int i, j, k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1], R[n2];
	for(int i=0; i<n1; i++) L[i] = arr[l+i];
	for(int j=0; j<n1; j++) R[j] = arr[m+j+1];
	i=0, j=0, k=l;
	while(i<n1 && j<n2) (L[i]<=R[j]) ? arr[k]=L[i++] : arr[k]=R[j++], k++;
	while(i<n1) arr[k++]=L[i++];
	while(j<n2) arr[k++]=R[j++];

}

void merge_sort(int arr[], int l, int r) {
	if(l<r) {
		int m = (l+r)/2;
		merge_sort(arr, l, m);
		merge_sort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main() {
  int arr[9] = {1, 2, 4, 5, 7, 8, 3, 9, 6};	
  int n = sizeof(arr)/ sizeof(arr[0]);
  merge_sort(arr, 0, n-1);
  for(int i=0; i<n; i++) {
  	cout << arr[i];
  }
}
