#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
long long int n,m,steps;
cin>>t;
while(t--){
    cin>>n>>m;
    steps=abs(n-m);
    cout<<steps<<endl;
}
}
