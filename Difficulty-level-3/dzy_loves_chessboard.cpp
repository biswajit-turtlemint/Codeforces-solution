#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    char a[101][101];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='.'){
                if((i+j)%2==0){
                    a[i][j]='B';
                }
                else{
                    a[i][j]='W';
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j];
            
        }
        cout<<endl;
    }
    return 0;
}