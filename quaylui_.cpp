#include<bits/stdc++.h>
using namespace std;
int a[100], n, k, ok;

void output() {
	for(int i=1; i<=k; i++) {
	 cout << a[i];
	} cout << endl;
}

void Try(int i) {
	for(int j = a[i-1]+1; j<=n-k+i; j++) {
		a[i]= j;
		(i==k) ? output() : Try(i+1);
	}
}
int main() {
	cin >> n >> k;
	Try(1);
}
