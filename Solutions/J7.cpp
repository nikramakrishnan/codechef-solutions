/*
Equations -
Volume = l*l*h; (as square cuboid will have the biggest volume)
8l + 4h=P;
2*l*l + 4hl=S;
These equations can be expressed in terms of S and P.
*/
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
double p,s,l,h,ans;
cin>>t;
while(t--){
    cin>>p>>s;
    l=(p-sqrt(p*p-24*s))/12;
    h=(p/4)-2*l;
    ans=l*l*h;
    cout<<fixed<<setprecision(2)<<ans<<endl;
}
}
