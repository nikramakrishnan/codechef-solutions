#include<iostream>
using namespace std;
int findgcd(int,int);
int main(){
int t,a,b,minimum;
long long int gcd,lcm,prod;
cin>>t;
while(t--){
    cin>>a>>b;
    prod=a*b;
    gcd=1;
    if(a>b) gcd=findgcd(a,b);
    else gcd=findgcd(b,a);
    lcm=prod/gcd;
    cout<<gcd<<" "<<lcm<<endl;
}
}
int findgcd(int x,int y){
if(x%y==0) return y;
else return findgcd(y,x%y); //WXPLANATION REQUIRED
}
