#include<bits/stdc++.h>
using namespace std;
 int ok, used[100];
 const int n=4;

 char vitri[n+1] ={'@','A','B','C','D'};
 string ten[n+1] = {"0", "Tung", "Chuc", "Truc", "Mai"};

void output() {
	for(int i=1; i<=n; i++) {
		cout << vitri[i] << "-" << ten[i] << " ";
	}
	cout << endl;
}

//void sinh(int &a) {
//	int i=n-1;
//	while(i>0 && vitri[i] > vitri[i+1]) --i;
//	if(i==0) ok=0;
//	else {
//		int j=n;
//		a++;
//		while(vitri[i] > vitri[j]) --j;
//		swap(vitri[i], vitri[j]);
//		int l=i+1, r=n;
//		while(l<r) {
//			swap(vitri[l++], vitri[r--]);
//		}
//	}
//}

void Try(int i, int &a) {
	for(int j=1; j<=n; j++) {
		if(used[j]==0) {
			used[j]=1;
			vitri[i] = (char)(j+65-1);
			i==n ? a++,output() : Try(i+1, a);
			used[j]=0;
		}
		
	}
}
int main() {
//    ok=1;
//    int a=1;
//    while(ok) {
//    	cout << a << " :" ;
//             output();
//             sinh(a);
//	}
int a=0;
Try(1,a);
cout << a;

}
