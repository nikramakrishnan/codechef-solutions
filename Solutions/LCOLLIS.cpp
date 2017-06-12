#include<iostream>
using namespace std;
int main(){
int t,n,m,sum;
string str;
cin>>t;
while(t--){
    cin>>n>>m;
    int c=0;
    int girl[m+1];
    for(int i=0;i<=m;i++) girl[i]=0;
    for(int i=1;i<=n;i++){
        cin>>str;
        for(int j=0;j<m;j++){
            if(str[j]=='1') girl[j+1]++;
        }
    }
    for(int i=1;i<=m;i++){
        if(girl[i]>1){
            sum=((girl[i])*(girl[i]-1))/2;
            c+=sum;
        }
    }
    cout<<c<<endl;
}
}
