#include<iostream>
using namespace std;
int main(){
int t,n,m,a,d,ans;
cin>>t;
while(t--){
    cin>>n>>m;
    a=n-1;
    d=1+((n-1)*2);
    if(m>1){
        ans=a+((m-1)*d);
    }
    else if(m==1){
        ans=n-1;
    }
    cout<<ans<<endl;
}
}
