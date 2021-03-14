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
    LL n;
    cin>>n;
    LL arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int m;
    long long minm=0;
    cin>>m;
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        cout<<max(minm, arr[a])<<" ";
        minm=max(minm,arr[a])+b;
    }
    
}