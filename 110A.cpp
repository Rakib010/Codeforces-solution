#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; int countt=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]== '4'|| s[i] == '7'){
           countt++; 
    }
}
    if(countt == 4 || countt == 7){
        cout<<"YES";
     } else{
        cout<<"NO";
     }
  

     
}

