#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int i=0;
    while((a.find(b[i])!=-1 || b[i]==' ') && i<b.length()){
        if(b[i]!=' '){
            a.erase(a.find(b[i]),1);
        }
        i++;
    }
    if(i==b.length()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}