#include<iostream>
using namespace std;
int main(){
int t,n,u;
long long int f;
cin>>t;
for(int i=0;i<t;i++){
    cin>>n;
    f=1,u=1;
    while(u<=n){
        f=f*u;
        u++;
    }
    cout<<f<<endl;
}
}
//IS ABLE TO CALCULATE ONLY UPTO 20!
