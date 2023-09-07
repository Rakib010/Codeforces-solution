#include<bits/stdc++.h>
using namespace std;
int main(){
  int x=0;
  string cha;
  int t; cin>>t;
  while(t--){
    cin>>cha;
    if(cha[1] =='+'){
       x++;
    }
    else{
      x--;
    }
  }
  cout<<x;
}
