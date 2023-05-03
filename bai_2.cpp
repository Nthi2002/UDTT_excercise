#include <iostream>
using namespace std;
const int n = 7, k=6;
char s[n+1]={'@', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
int ok;
void output() {
	for(int i=1; i<=k; i++) {
		cout << s[i] << " ";
	} cout << endl;
}


void Try(int i) {
	for(int j=int(s[i-1])+1; j<=65+n-k+i-1; j++) {
		s[i] = char(j);
		i==k ? output() : Try(i+1);
	}
}
int main() {

	cout << "quay lui" << endl;
	Try(1);
}
