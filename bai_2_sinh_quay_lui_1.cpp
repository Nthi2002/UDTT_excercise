#include<bits/stdc++.h>

using namespace std;
//while(kinh chua phai cau hinh cuoi cung)
// <in ra cau hinh hien tai>
//  <sinh ra cau hinh tiep theo>


const int n=7, k=6;
int ok;
char a[n+1] ={'@','A','B','C','D','E','F','G'};

void output() {
		for(int i=1 ; i<=k; i++ ) {
			cout << a[i];
		}
		cout << endl;
}
void sinh() {
	int i=k;
    while(i>0 && a[i] == (char)(65+n-k+i-1)) {
    	i--;
	}
	if(i==0) ok = 0;
	else {
		a[i] = (char)(int(a[i])+1);
		for(int j = i+1; j <= k ; j++)  {
			a[j] = (char)(int(a[j-1])+1);
		} 
	}
}

// quay lui

void Try(int i) {
	for(int j = int(a[i-1])+1; j<=65+n-k+i-1; j++) {
		a[i] = (char)(j);
		i==k ? output() : Try(i+1);
	}
}


int main() {
	ok = 1;
	cout << "sinh" << endl;
	
	while(ok) {
        output();
		sinh();
	}
	
	cout << "quaylui" << endl;
	Try(1);
}
