#include<bits/stdc++.h>
using namespace std;
int n , ok, a[100], k;

void khoiTao() {
	for(int i=1; i<=k; i++) {
		a[i] =i;
	}
}


void sinh() {
	int i=k;
	while(i>0 && a[i] == n-k+i) --i;
	if(i==0) ok=0;
	else {
		a[i]++;
		for(int j=i+1; j<=k; j++) {
			a[j] = a[j-1]+1;
		}
	}
}
int main() {
	cin >> n >> k;
	khoiTao();
	ok=1;
	while(ok) {
		for(int i=1; i<=k; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
}
