#include<iostream>
#include<algorithm>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,n,m,pos;
cin>>t;
while(t--){
    cin>>n>>m;
    int maxm=0,minm=100005;
    for(int i=0;i<m;i++){
        cin>>pos;
        if(pos>maxm) maxm=pos;
        if(pos<minm) minm=pos;
    }
    for(int k=0;k<n;k++){
        cout<<max(abs(k-minm),abs(k-maxm))<<" ";
    }
    cout<<endl;
}
}
