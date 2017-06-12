#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--){
    int n,k,a;
    cin>>n>>k;
    int c[107]={0};
    int finalc=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a!=(i) && c[a]!=-1) c[a]++;
        else if(a==i) c[i]=-1;
    }
    for(int i=1;i<=n;i++){
        if(c[i]>=k && c[i]!=1) finalc++;
    }
    cout<<finalc<<endl;
}
}
