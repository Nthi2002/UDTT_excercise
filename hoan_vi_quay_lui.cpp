#include<bits/stdc++.h>
using namespace std;
int n , ok, a[100], used[100];

void output() {
	for(int i=1; i<=n; i++) cout << a[i]; cout << endl;
}

void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(used[j]==0) {
			a[i]=j;
			used[j]=1;
			i==n ? output() : Try(i+1);
			used[j]=0;
		}
		
	}
}

int main() {
	cin >> n;
	Try(1);
}
