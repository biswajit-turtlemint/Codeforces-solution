#include <bits/stdc++.h>
using namespace std;
int i,m,n,a[105],b[105];
main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<m;i++)cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	if(a[n-1]<b[0])
	{
		if(a[0]*2<b[0])cout<<max(a[n-1],a[0]*2);
		else cout<<-1;
	}
	else cout<<-1;
}