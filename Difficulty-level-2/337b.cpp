#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  a*=d;
  c*=b;
  if(a>c)
    swap(a,c);
  int x=__gcd(a,c);
  a=c-a;
  a/=x;
  c/=x;
  cout<<a<<"/"<<c;
  return 0;
}