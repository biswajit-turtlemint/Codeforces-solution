#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0,j;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(count==0 && s[i]=='0'){
            count++;
            j=i;
            break;
        }
    }
    if(count==0){
        for(int i=0;i<s.length()-1;i++){
            cout<<s[i];
        }
    }
    else{
        s.erase(s.find(s[j]),1);
        cout<<s;
        
    }
}