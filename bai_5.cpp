#include<iostream>
#include<string.h>
using namespace std;
struct congViec {
	string macv;
	int thoibd;
	int thoikt;
};
int k=5,ok, n=6;
 int a[100];
congViec c[6] = {
{"CV01", 0, 55},
{"CV02", 0, 50},
{"CV03", 0, 49},
{"CV04", 0, 56},
{"CV05", 0, 59},
{"CV06", 0, 30}
};
void output(congViec &c) {
	cout << "ma cong viec : " << c.macv << endl;
	cout << "thoi gian bat dau : " << c.thoibd << endl;
	cout << "thoi gian ket thuc : " << c.thoikt << endl << endl;
}
void hienthinguoc(congViec c[], int n) {
	if(n==0) return;
	else {
		output(c[n-1]);
		hienthinguoc(c, n-1);
	}
}
void output_1() {
	for(int i=1; i<=k; i++) {
		cout << c[a[i]-1].macv << " ";
	} cout << endl;
}

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
	
	int n = sizeof(c)/sizeof(c[0]);
	bool choose = true;
   int x;
   while(choose) {
   	 cout << "chon : "; cin >> x;
   	 if(x==1) {
   	 		cout << "hien thi day dao nguoc bang de quy" << endl;
            hienthinguoc(c, n);
	} else if(x==2) {
		   cout << "cach chon 5 cv tu 6 cv" << endl;
    ok=1;
    khoiTao();
    while(ok) {
          output_1();
          sinh();
	} 
	
	}
	else choose = false;
	
	}

 
}

