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
 string a,b;
 cin>>a>>b;
 int count=0;
 for(int i=0;i<a.length();i++){
     if(a[i]!=b[i]){
         count++;
     }
 }
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());

 if(a==b && count==2){
     cout<<"YES"<<endl;
 }
 else{
     cout<<"NO"<<endl;
 }
}