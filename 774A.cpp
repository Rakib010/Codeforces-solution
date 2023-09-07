#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    int anton=0,danik=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            anton++;
        }
        if(s[i]=='D'){
            danik++;
        }          
    }
    if(anton > danik){
        cout<<"Anton";
    }
    if(anton < danik){
        cout<<"Danik";
    }
    if(anton==danik){
        cout<<"Friendship";
    }

        

}