#include<bits/stdc++.h>
using namespace std;
int main(){
      
      long long n,k,extra,print;
      cin>>n>>k;
      if(n%2==0){
        extra=n/2;
      }else{
        extra=(n/2)+1;
      }
      if(k<=extra){
        cout<<(2*k)-1;
      }else{
        cout<<(k-extra)*2;
      }

     



 }


      
    
      
    
    
