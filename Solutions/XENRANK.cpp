#include<iostream>
using namespace std;

int main(){
int t;
long long int u,v,xbound,brank,rrank;
cin>>t;
while(t--){
    cin>>u>>v;
    xbound=u+v+1;
    brank=xbound*((xbound+1))/2;
    rrank=brank-v;
    cout<<rrank<<"\n";
}
}
