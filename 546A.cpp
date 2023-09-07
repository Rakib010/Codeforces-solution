#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,i;int sum=0;
    cin>>k>>n>>w;
     for(int i=1;i<=w;i++){
          sum+=i;    
     }
     if(k*sum<n){
        cout<<"0";
     } else{
        k = sum*k;
        n = k - n;
        cout<<n;
     }

}