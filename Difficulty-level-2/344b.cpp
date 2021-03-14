#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int a,b,c,x,y,z;
int main(){
	cin>>a>>b>>c;
	x=b+a-c;
	y=b+c-a;
	z=a+c-b;
	if(x<0||y<0||z<0||x%2||y%2||z%2)
	cout<<"Impossible"<<endl;
	else cout<<x/2<<" "<<y/2<<" "<<z/2<<endl;
}