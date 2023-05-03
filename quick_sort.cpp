#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int left = low;
	int right = high-1;
	while(true) {
		while(left <= right && arr[left] < pivot) left++;
		while(right >= left && arr[right] > pivot) right--;
		if(left >= right) break;
		swap(arr[left++], arr[right--]);
	}
	swap(arr[left], arr[high]);
	return left;
}


void quickSort(int arr[], int low, int high) {
	if(low < high) {
	int pi = partition(arr, low, high);
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
	}

}
int main()
{
    int arr[] = {1, 8, 3, 9, 4, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
  
    printf("Sorted array: \n");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
