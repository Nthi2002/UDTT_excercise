#include<bits/stdc++.h>
using namespace std;
int n , ok, a[100];


void khoiTao() {
 for(int i=1; i<=n; i++) 
    a[i]=0;
}

void sinh() {
    int i=n;
    while(i>0 && a[i]==1) a[i--]=0;
	i==0 ? ok=0 : a[i]=1; 
}

int main() {
  	cin >> n;
  	khoiTao();
  	ok=1;
  	while(ok) {
  	   for(int i=1; i<=n; i++) {
  	   	cout << a[i];
		 } cout << endl;
  		 sinh();
	  }
}
