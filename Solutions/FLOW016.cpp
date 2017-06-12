//TLE ERROR ????
#include<iostream>
using namespace std;
int findgcd(int,int);
int main(){
int t;
long long int a,b,gcd,lcm;
cin>>t;
for(int i=0;i<t;i++){
    cin>>a>>b;
    gcd=findgcd(a,b);
    lcm=(a*b)/gcd;
    cout<<gcd<<" "<<lcm<<endl;
}
}
int findgcd(int x,int y){
int gcd=1,least;
if(x>y) least=y;
else least=x;
for(int j=1;j<=least;j++){
    if(x%j==0 && y%j==0) gcd=j;
}
return gcd;
}
