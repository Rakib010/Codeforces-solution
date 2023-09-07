#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,cnt=0; cin>>t;
   while(t--){
    int a,b,c; cin>>a>>b>>c;
      if(a+b==c || a+c==b ||b+c==a)
        cout<<"Yes"<<endl;  //"yEs""Yes""yes""YES
     else cout<<"No"<<endl;   
   } 

}