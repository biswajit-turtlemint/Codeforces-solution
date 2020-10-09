#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n/3;
    int a[8]={0};
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        ++a[num];
    }
    if(a[1]==m && a[2]+a[3]==m && a[6]+a[4]==m && a[2]>=a[4] && a[6]>=a[3]){
        while(a[4]--){
            --a[2];
            cout<<"1 2 4\n";
        }
        while(a[2]--){
            cout<<"1 2 6\n";
        }
        while(a[3]--){
            cout<<"1 3 6\n";
        }
    }
    else{
        cout<<"-1";
    }
}