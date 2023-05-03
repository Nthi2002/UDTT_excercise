#include<bits/stdc++.h>
using namespace std;

//long long fibo(int n) {
//	if(n<=1) return n;
//	return fibo(n-1) + fibo(n-2); 
//}

int nCk(int n, int k) {
	if(k==0|| k==n) return 1;
	return nCk(n-1, k) + nCk(n-1, k-1);
}

int gcd(int a, int b) {
	if(b==0) return a;
	else 
	return gcd(b, a%b);
}
int main() {
//	cout << fibo(3) << endl;
//   cout << nCk(6, 4); 
cout << gcd(4, 2);
}
