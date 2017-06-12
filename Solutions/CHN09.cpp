#include<iostream>
using namespace std;
int main(){
int t,a,b;
string x;
cin>>t;
while(t--){
    a=0;b=0;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]=='a') a++;
        else b++;
    }
    if(a>b) cout<<b<<endl;
    else cout<<a<<endl;
}
}
