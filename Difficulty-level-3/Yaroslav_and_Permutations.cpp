#include <bits/stdc++.h>
using namespace std;
void distinctelements(int arr[],int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int c=0;
    for(int i=0;i<n;i++){       //if c is less than or equal to (n+1)/2 then it is possible
        if(c<m[arr[i]]){
            c=m[arr[i]];
        }
    }
    if(c>(n+1)/2){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

}
int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    distinctelements(arr,n);
    return 0;
}