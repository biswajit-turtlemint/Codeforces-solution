#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n,tf=0,fy=0,c=1,arr[100001];
    while (cin>>n)
    {
        /* code */
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==25){
                tf++;
            }
            else if(arr[i]==50){
                if(tf<1){
                    c=0;
                    break;
                }
                else{
                    tf=tf-1;
                    fy=fy+1;
                }
            }
            else if(arr[i]==100){
                if(tf>=1 && fy>=1){
                    tf=tf-1;
                    fy=fy-1;
                }
                else if(tf>=3){
                    tf=tf-3;
                }
                else{
                    c=0;
                    break;
                }
            }
        }
        if(c==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
    
}