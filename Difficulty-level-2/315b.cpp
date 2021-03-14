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
int sum;
int main(){
 LL n,m;
 cin>>n>>m;
 LL arr[n];
 for(int i=1;i<=n;i++){
     cin>>arr[i];
 }
 while(m--){
     int t,v,x,q,y;
     cin>>t;
     if(t==3){
         cin>>q;
         cout<<arr[q]+sum<<endl;
     }
     else if(t==2){
         cin>>y;
         sum=sum+y;
     }
     else{
         cin>>v>>x;
         arr[v]=x-sum;
     }
 }
}