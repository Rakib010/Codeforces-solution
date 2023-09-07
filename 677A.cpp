#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int width,cnt=0,cunt=0; 
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=h){
         cnt++ ;            
        } else{
        cunt+=2;
            
        }
    }
  cout<<cnt+cunt;  
 
}