#include <bits/stdc++.h>
using namespace std;
int main(){
    
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    
    int n,m,diff,min;
    cin>>n>>m;
    diff=0;
    min=n;
    if(n>m){
        diff=n-m;
        min=m;
        for(int i=0;i<min;i++){
            cout<<"BG";
        }
        for(int j=0;j<diff;j++){
            cout<<"B";
        }
    }
    else if(m>n){
        diff=m-n;
        min=n;
        for(int i=0;i<min;i++){
            cout<<"GB";
        }
        for(int j=0;j<diff;j++){
            cout<<"G";
        }
    }
    else{
        for(int i=0;i<min;i++){
            cout<<"GB";
        }
    }
}