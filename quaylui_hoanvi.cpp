#include <iostream>
using namespace std;

const int n = 4;
int ok;
char ghe[n+1] = {'@', 'A', 'B', 'C', 'D'};
string ten[n+1]={"0", "tung", "cuc", "truc", "mai"};
int used[100];
void output() {
	for(int i=1; i<=n; i++) {
		cout << ghe[i] << "-" << ten[i] << " ";
	} cout << endl;
}

void sinh(int &a) {
	int i=n-1;
	while(i>0 && int(ghe[i])>int(ghe[i+1]))--i;
	if(i==0) ok=0;
	else {
		a++;
		int j=n;
		while(int(ghe[i])>int(ghe[j])) --j;
		swap(ghe[i], ghe[j]);
		int l = i+1, r=n;
		while(l<r) {
			swap(ghe[l++], ghe[r--]);
		}
	}
}

void Try(int i, int &b) {
	for(int j=65; j<=65+3; j++) {
		if(used[j]==0) {
		used[j]=1;
		 ghe[i] = (char)(j);
		i==n ? b++,output() : Try(i+1, b);
			used[j]=0;
		}

	}
}
int main()
{ 
  int a=1;
  ok=1;
  while(ok) {
  	output();
  	sinh(a);
  }
  int b=0;
   cout << "quay lui" << endl;
  Try(1, b);
  cout << b;
}
