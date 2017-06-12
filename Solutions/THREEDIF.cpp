#include<iostream>
#include<algorithm>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
const long long int m=1000000007;
long long int n[3],prod;
cin>>t;
while(t--){
    cin>>n[0]>>n[1]>>n[2];
    sort(n,n+3);
    prod=(n[0]%m)*((n[1]-1)%m)%m*((n[2]-2)%m)%m;
    cout<<prod<<endl;
}
}
