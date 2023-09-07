#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;int i,countt=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1])
         countt++;
    }
    if(countt%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";

    }
  
} 

