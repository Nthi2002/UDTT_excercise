#include<bits/stdc++.h>

using namespace std;

//khoi tao
int n , a[100], ok;

// ham khoi tao
void khoiTao() {
	for(int i=1; i<=n; i++) {
		a[i] = 0;
	}
}
//phuong phap sinh
void sinh() {
	int i=n;
	while(i>0 && a[i]==1) {
		a[i--]=0;
	} 
	i==0 ? ok=0 : a[i]=1;
}

int main() {
	cin >> n;
	ok=1;
	khoiTao();
	while(ok) {
		for(int i=1; i<=n; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
}
