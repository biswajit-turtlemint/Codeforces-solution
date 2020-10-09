#include <bits/stdc++.h>
using namespace std;
int g[10][10],ans,a[10]={0,1,2,3,4,5};
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>g[i][j];
        }
    }
    do{
        int s=0;
        for(int i=1;i<5;i++){
            for(int j=i+1;j<=5;j+=2){
                s+=g[a[j-1]][a[j]]+g[a[j]][a[j-1]];
            }
            ans=max(ans,s);
        }
    }while(next_permutation(a+1,a+6));
    cout<<ans;
    return 0;
}