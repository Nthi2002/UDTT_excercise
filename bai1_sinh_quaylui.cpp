#include<bits/stdc++.h>
using namespace std;

const int n=4;
int check[n];
int ok;
string vitri[n+1]={"0","A","B","C","D"};
string ten[n+1]={"0","Tung","Cuc","Truc","Mai"};
int count=0;

void output() {
			for(int i=1; i<=n; i++) {
				cout << vitri[i] << "-" << ten[i] << " ";
		}
		cout << endl;
}

void sinh(int &a) {
	int i=n-1;
	while(i>0 && vitri[i] > vitri[i+1]) --i;
	if(i==0) ok=0;
	else {
		int j=n; 
		a++;
		while(vitri[i] > vitri[j]) --j;
		swap(vitri[i], vitri[j]);
		int l = i+1, r = n;
		while(l<r) swap(vitri[l++], vitri[r--]);
	}
	
}

void quaylui(int i, int &a) {
	for(int j=0; j<n; j++) {
		if(check[j] == 0) {
			check[j] = 1;
			vitri[i] = (char)(65+j);
			i==n ?  a++, output() : quaylui(i+1, a);
			check[j] =0; 
		}
	}
}

int main() {
	ok=1;
	//sinh
	int a = 1;
	//quay lui
	int b = 0;
	while(ok) {
	    output();
		sinh(a);
	}
		cout<<"tong so hoan vi duoc sap xep la: "<< a << endl << endl;
		
	quaylui(1, b);
		cout<<"tong so hoan vi duoc sap xep la: "<<b;
}
