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
 int m,l,r,count=0;
 string s;
 int dp[100005];
 cin>>s>>m;
 for(int i=1;i<s.size();i++){
     if(s[i]==s[i-1]){
         count++;
     }
     dp[i]=count;
 }
 while(m--){
     cin>>l>>r;
     cout<<dp[r-1]-dp[l-1]<<endl;
 }
}