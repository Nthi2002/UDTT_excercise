#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    //T?o 2 m?ng t?m con
    int L[n1], R[n2];
 /* Copy d? li?u sang các m?ng t?m */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
   
    i = 0; // Kh?i t?o ch? s? b?t d?u c?a m?ng con d?u tiên
    j = 0; // Kh?i t?o ch? s? b?t d?u c?a m?ng con th? hai
    k = l; // Kh?i t?o ch? s? b?t d?u c?a m?ng luu k?t qu?
/* Tr?n hai m?ng t?m v?a r?i vào m?ng arr*/
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
//L?y ph?n còn l?i c?a dãy L cho vào cu?i dãy arr n?u còn.
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 //L?y ph?n còn l?i c?a dãy R cho vào cu?i dãy arr n?u còn.
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
   
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
     //Tìm ch? s? n?m gi?a m?ng d? chia m?ng thành 2 n?a:
        int m = l+(r-l)/2;
  
     // G?i hàm d? quy ti?p t?c chia dôi t?ng n?a m?ng
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
  
     //G?i hàm tr?n
        merge(arr, l, m, r);
    }
}
 // Hàm xu?t m?ng 
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
    printf("%d ", A[i]);
    printf("\n");
}
   
   
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
   
     
    mergeSort(arr, 0, arr_size - 1);
    printf("\nSorted array:\n");
    printArray(arr, arr_size);
return 0;
}


