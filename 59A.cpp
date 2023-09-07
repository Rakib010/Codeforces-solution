#include<bits/stdc++.h>
using namespace std;
int main(){
    int up=0,low=0; int x,y;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
              up++;
        }
        if(islower(s[i])){
            low++;
        } 
    }
    if(low<up){
       transform(s.begin(), s.end(), s.begin(), ::toupper);
       cout<<s;
    } 
      if(up<low || up==low){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }
   
   
}