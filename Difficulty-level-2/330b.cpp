#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, l[10001], sum;
int main()
{
	cin>>a>>b;
	for(int i=1; i<=b; i++)
	{
		cin>>c>>d;
		l[c]=1;
		l[d]=1;
	}
	for(int i=1; i<=a; i++)
	{
		if(l[i]==0) sum=i;
	}
	cout<<a-1<<endl;
	for(int i=1; i<=a; i++)
	{
		if(i!=sum) cout<<sum<<" "<<i<<endl;
	}
}