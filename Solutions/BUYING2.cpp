#include<iostream>
using namespace std;
int main(){
int t,n,x;
cin>>t;
while(t--){
    int least,sum=0,sweets,check;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0) least=a[i];
        else if(a[i]<least) least=a[i];
        sum+=a[i];
    }
    sweets=sum/x;
    sum-=least;
    check=sum/x;
    if(sweets==check) cout<<"-1"<<endl;
    else cout<<sweets<<endl;
}
}
