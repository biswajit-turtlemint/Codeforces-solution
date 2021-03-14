#include <bits/stdc++.h>
using namespace std; 
#define endl "\n"
#define LL long long int
const LL MOD=1e9+7;
#define pb push_back
#define pob pop_back()
#define sp " "
#define ff first
#define ss second

int a[100000+5],cnt,n,c;
int main(){

	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	for(int i = 0; i < n; ++i){
		if(a[i] == i)
			cnt++;
		else if(a[a[i]] == i) 
			c = 1;
	}
	if(cnt == n)
		cout << n << endl;
	else
		cout << cnt + c + 1 << endl;
	return 0;
}
