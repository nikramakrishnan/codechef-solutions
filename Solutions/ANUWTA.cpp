//Must take into account that ans might be in order of 10^10
#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
long long int n,ans;
cin>>t;
while(t--){
    cin>>n;
    ans=n+(n*(n+1)/2);
    cout<<ans<<endl;
}
}
