#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
long long int n,k,prod,maxprod,i;
cin>>t;
while(t--){
    cin>>n>>k;
    maxprod=0;
    long long int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        prod=(k/a[i])*b[i];
        maxprod=max(prod,maxprod);
    }
    cout<<maxprod<<endl;
}
}
