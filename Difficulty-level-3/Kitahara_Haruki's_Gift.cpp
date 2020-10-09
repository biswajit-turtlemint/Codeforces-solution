#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ncount=0,mcount=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int m;
        cin>>m;
        if(m==200){
            mcount++;
        }
        else{
            ncount++;
        }
    }
    if(ncount%2==1 || n<2){
        cout<<"NO";
    }
    else if(ncount==0 && mcount%2==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}