#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int p;
    int minm=1000007;
    long long int pro,sum=0;
    for(int i=0;i<n;i++){
        cin>>p;
        minm=min(p,minm);
        sum+=p;
    }
    sum-=minm;
    pro=minm*(sum);
    cout<<pro<<endl;
}
}
