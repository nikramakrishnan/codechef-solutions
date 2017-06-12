#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    double s,v,ans;
    cin>>s>>v;
    ans=(2*s)/(3*v);
    cout<<setprecision(8)<<fixed<<ans<<endl;
}
}
