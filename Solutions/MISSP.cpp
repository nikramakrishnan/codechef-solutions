#include<iostream>
#include<algorithm>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--){
    int def,n,maxm=0;
    cin>>n;
    int a,c[100007]={0};
    for(int i=0;i<n;i++){
        cin>>a;
        maxm=max(maxm,a);
        c[a]++;
    }
    for(int j=0;j<=maxm;j++){
        if(c[j]%2!=0) cout<<j<<endl;
    }
}
}
