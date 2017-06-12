#include<iostream>
using namespace std;
int main(){
long int n,k,t,o=0;
cin>>n;
cin>>k;
for(int i=0;i<n;i++){
    cin>>t;
    if(t%k==0){
        o+=1;
    }
}
cout<<o;
}
