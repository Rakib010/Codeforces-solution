#include<bits/stdc++.h>
using namespace std;
int main(){
 int m,c,mishka=0,chrise=0;
 int t;cin>>t;
 while(t--){
    cin>>m>>c;
    if(m>c) mishka++;
    else if(m<c) chrise++;
 }
  if(mishka>chrise) cout<<"Mishka";
  else if(mishka==chrise) cout<<"Friendship is magic!^^";
  else cout<<"Chris";

} 