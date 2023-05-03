#include<bits/stdc++.h>
using namespace std;

//int binarySearch(int a[], int n, int x) {
// int l = 0;
// int r = n-1;
// while(l<=r) {
// 	int mid = (l+r)/2;
// 	if(a[mid]==x) return mid;
// 	if(a[mid]>x) r = mid-1;
// 	if(a[mid]<x) l = mid+1;
// }
//return -1;
//}

int binarySearch(int a[], int x, int l, int r) {
	if(l>r) return -1;
	else {
		int mid = (l+r)/2;
		if(a[mid] == x) return mid;
		if(a[mid] > x) return binarySearch(a, x, l, mid-1);
		if(a[mid] < x) return binarySearch(a, x, mid+1, r);
	}
}

int main() {
  int arr[] = {0, 2, 3, 5, 10, 23, 25, 27};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 25;
  int index = binarySearch(arr, x , 0, n-1);
  if(index==-1) cout << x << " khong ton tai" << endl;
  else cout << x << " o vi tri " << index << endl;
}
 
