#include<bits/stdc++.h>
using namespace std;
int a[100], n, k, ok;

void khoiTao() {
	for(int i=1; i<=n; i++) {
		a[i]=i;
	}
}

void output() {
	for(int i=1; i<=n; i++) {
	 cout << a[i];
	} cout << endl;
}

void sinh() {
   int i=n-1;
   while(i>0 && a[i] > a[i+1]) i--;
   if(i==0) ok=0;
   else {
   	int j=n;
   	while(a[i]>a[j]) --j;
   	swap(a[i], a[j]);
   	int l=i+1, r=n;
   	while(l<r) {
   		swap(a[l++], a[r--]);
	   }
   }
}
int main() {
	cin >> n;
	khoiTao();
	ok=1;
	while(ok) {
		output();
		sinh();
	}
}
