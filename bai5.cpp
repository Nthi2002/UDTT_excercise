#include<bits/stdc++.h>
using namespace std;
int use[100], b[100], k=4, n=6;
struct chuyenBay {
	string soHieu;
	double giaVe;
	int soGhe;
};

chuyenBay a[6] = {
{"VN001", 6e5, 100},
{"VN002", 7e5, 100},
{"VN003", 8e5, 100},
{"VN004", 2e5, 100},
{"VN005", 3e5, 100},
{"VN006", 9e5, 100},
};
void output(chuyenBay & a) {
	cout << "so hieu : " << a.soHieu << endl;
	cout << "gia ve : " << (size_t)a.giaVe << endl;
	cout << "so hieu : " << a.soGhe << endl;
	
}
int findMin(chuyenBay a[], int l,int r) {
	if(l==r) return r;
	else {
		int m = (l+r)/2;
		int cleft = findMin(a, l, m);
		int cright = findMin(a, m+1, r);
		return a[cleft].giaVe >a[cright].giaVe ? cright : cleft;
	}
}
void dequy(chuyenBay a[], int n) {
	if(n==0) return;
	else {
		if(a[n].giaVe>=7e5)
		output(a[n]);
		dequy(a, n-1);
	}
}
void output_2(chuyenBay a[]) {
	for(int i=1; i<=k; i++) {
		cout << a[b[i]-1].soHieu << " ";
	}
	cout << endl;
}

void Try(chuyenBay a[], int i) {
	for(int j=b[i-1]+1; j<=n-k+i; j++) {
		b[i] = j;
		i==k ? output_2(a) : Try(a, i+1);
	}
}
int main() {
   cout << "may bay co gia ve thap nhat " << endl;
   int indexmin = findMin(a, 0, 5);
   output(a[indexmin]);	
   cout << "hien thi gia ve co tren 700000" << endl;
   dequy(a, 5);
   cout << "cach lay 4cb trong 6cb la " << endl;
   int x;
   cin >> x;
   if(x==1) {
   	Try(a, 1);
   }
   
}
