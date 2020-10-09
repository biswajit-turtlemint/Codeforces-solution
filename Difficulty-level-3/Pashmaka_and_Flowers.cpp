#include <bits/stdc++.h>
using namespace std;
int main(){
    __int64 n,a[200001],tmin=0,tmax=0,type;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int max=a[n-1];
    int min =a[0];
    if(a[0]!=a[n-1]){
        for(__int64 i=0;i<n;i++){
            if(a[i]==min){
                tmin++;
            }
            if(a[i]==max){
                tmax++;
            }
        }
        type=tmin*tmax;
    }
    else{
        type =(n*(n-1))/2;
    }
    int diff=a[n-1]-a[0];
    cout<<diff<<" "<<type;

}