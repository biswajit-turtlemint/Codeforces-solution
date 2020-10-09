
#include <iostream>
using namespace std;
int main() {
int y,k,n;
bool f=false;
cin>>y>>k>>n;
int s=0,x;
while(s<=n){
    x=s-y;
    if(x>0){cout<<x<<' ';f=true;}
    s+=k;
}
if(f==false)cout<<-1;
return 0;
}