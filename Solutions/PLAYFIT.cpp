#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,n,x;
cin>>t;
while(t--){
    int ans=-1,least=1000000007;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        ans=max(ans,x-least);       //x-least will be negative in all the cases where input>ans.
        least=min(least,x);
    }
    if(ans>0) cout<<ans<<endl;
    else cout<<"UNFIT"<<endl;
}
}
