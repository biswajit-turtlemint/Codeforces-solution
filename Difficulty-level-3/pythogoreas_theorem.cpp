#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,z=0;
    double c;
    cin>>n;
    for(a=1;a<=n;a++){
        for(b=a+1;b<=n;b++){
            c=a*a + b*b;
            c=sqrt(c);

            if(floor(c)==c && c<=n){
                z++;
            }
        }
    }
    cout<<z;
}