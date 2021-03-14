#include <bits/stdc++.h>
using namespace std; 
#define endl "\n"
#define LL long long int
const LL MOD=1e9+7;
#define pb push_back
#define pob pop_back()
#define sp " "
#define ff first
#define ss second
int main(){
    LL n,k;
    cin>>n>>k;
    LL arr[n],minm=INT_MAX,sum=0;
    for(LL i=0;i<n;i++){
        cin>>arr[i];
    }
    for(LL i=0;i<n;i++){
        if(arr[i]<0 && k>0){
            arr[i]=arr[i]*-1;
            k--;
        }
        sum+=arr[i];
        minm=min(arr[i],minm);
    }
    if(k%2==1){
        sum-=2*minm;
    }
    cout<<sum<<endl;
}