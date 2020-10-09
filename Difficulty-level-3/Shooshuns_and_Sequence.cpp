#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,k,a[100001];
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=n;i>0;i--){
        if(a[i]!=a[k]){
            break;
        }
    }
    int b=i>k?-1:i;
    cout<<b;
}