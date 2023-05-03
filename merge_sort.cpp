#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    //T?o 2 m?ng t?m con
    int L[n1], R[n2];
 /* Copy d? li?u sang c�c m?ng t?m */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
   
    i = 0; // Kh?i t?o ch? s? b?t d?u c?a m?ng con d?u ti�n
    j = 0; // Kh?i t?o ch? s? b?t d?u c?a m?ng con th? hai
    k = l; // Kh?i t?o ch? s? b?t d?u c?a m?ng luu k?t qu?
/* Tr?n hai m?ng t?m v?a r?i v�o m?ng arr*/
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
//L?y ph?n c�n l?i c?a d�y L cho v�o cu?i d�y arr n?u c�n.
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 //L?y ph?n c�n l?i c?a d�y R cho v�o cu?i d�y arr n?u c�n.
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
     //T�m ch? s? n?m gi?a m?ng d? chia m?ng th�nh 2 n?a:
        int m = l+(r-l)/2;
  
     // G?i h�m d? quy ti?p t?c chia d�i t?ng n?a m?ng
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
  
     //G?i h�m tr?n
        merge(arr, l, m, r);
    }
}
 // H�m xu?t m?ng 
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


