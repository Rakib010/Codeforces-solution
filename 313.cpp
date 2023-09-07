#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y; cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }else{
         x=n%10;
         y=(n/10) * 10 + n/10;
        cout<< max(x,y)<<endl;

    }
}





