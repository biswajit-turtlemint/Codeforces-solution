#include<iostream>
using namespace std;
int main()
{
	
	int n,k,a[200000],t=0,sum=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<k;i++)
	{
		sum+=a[i];
	}
	int minn=sum;
	for(int i=k;i<n;i++)
	{
		sum=sum+a[i]-a[i-k];
		if(sum<minn)
		{
			minn=sum;
			t=i-k+1;
		}
	}
	cout<<t+1<<endl;
}