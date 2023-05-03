#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100],s=0,dem=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=n;i>=1;i--){
        if(s+a[i]<=50){
            s+=a[i];
  
            dem++;
        }
        else break;
    }
    cout<<dem;
    return 0;
}
