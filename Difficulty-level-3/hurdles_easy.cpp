#include<iostream>
#include<vector>


#define vi vector<int> 
#define vii vector<vector<int> > 
#define pb push_back

#define pr std::pair
#define mp std::make_pair
#define ff first
#define ss second

#define ll long long

#define foc(i,st) for(i=0;st[i]!=NULL;i++)
#define fo(k,n) for(k=0;k<n;k++)

using namespace std;

void solve(){
    int n,i;
    ll k,r,s1=0,s2=0,lim=1000000007;
    cin>>n>>k;
    
        fo(i,n){
        cin>>r;
        if(int(k/n)%2==0){
            if(i<k%n)
            s1+=r;
        }
        else if(i>=(n-k%n))
        s1+=r;
        
        s2+=r;
        
    }
    
    

    s2=(s2*(int(k/n)))+s1;
    s2=s2%lim;
    cout<<s2<<"\n";
}

int main()
{
int t;
cin>>t;
while(t){
    solve();
    t--;
}

}