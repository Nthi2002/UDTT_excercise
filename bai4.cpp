#include<iostream>
#include<string.h>

using namespace std;
int flag=0;
int k = 4, n;
int a[100];
struct ChuyenBay{
	string soHieu;
	double giaVe;
	int soGhe;
};

ChuyenBay b[6]={
	{"VN001",3000000,150},
	{"VN002",5000000,100},
	{"VN003",2000000,123},
	{"VN004",6000000,149},
	{"VN005",500000,155},
	{"VN006",600000,151},
};

void output(ChuyenBay &b) {
	cout << "So hieu :" << b.soHieu << endl;
	cout << "gia ve :"  << (size_t)b.giaVe << endl;
	cout << "so ghe :"  << b.soGhe << endl << endl;
}
void timGiaVe(ChuyenBay b[], int n) {
	if(n==0) flag =1 ;
	else {
		timGiaVe(b, n-1);
		if(b[n-1].giaVe>7e5)  output(b[n-1]); 
	}
}

int timMinGiaVe(ChuyenBay b[], int l, int r) {
	if(l==r) return r;
	else {
		int m = (l+r)/2;
		int cleft = timMinGiaVe(b, l, m);
		int cright = timMinGiaVe(b, m+1, r);
		return b[cleft].giaVe > b[cright].giaVe ? cright : cleft;
	}
}

void output_1(ChuyenBay b[]) {
	for(int i=1; i<=k; i++) {
		cout << b[a[i]-1].soHieu <<  " ";
	} cout << endl;
}
void Try(int i, ChuyenBay b[]) {
	for(int j=a[i-1]+1; j<=n-k+i; j++) {
		a[i] = j;
		i==k ? output_1(b) : Try(i+1, b);
	}
}

int main(){
   n = sizeof(b)/sizeof(b[0]);
   bool choose = true;
   int x;
   while(choose) {
   	   cout << "chon : "; cin >> x;
   if(x==1) {  
   cout << "tat ca cac chuyen bay co gia tren 700000 la : " << endl;
   timGiaVe(b, n);
   } else if(x==2) {
   	  cout << "chuyen bay co gia ve thap nhat la : " << endl;
     int min = timMinGiaVe(b, 0, n-1);
     output(b[min]);
   } else if(x==3){
   	  cout << "cach lay 4 chuyen bay tu 6 chuyen bay la : " << endl;
 Try(1, b);
   } else {
   	choose = false;
   }
   }


//  output(b[min]);


}
