#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--){
    long long int n,c0=0,c1=0,c2=0,total=0,len;
    cin>>n;
    len=n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) c0++;
        if(a[i]==1) c1++;
        if(a[i]==2) c2++;
    }
    for(int i=0;i<n;i++){
        if(a[i]==0) c0--;
        else if(a[i]==1) c1--;
        else if(a[i]==2){
            c2--;
            total+=(len-c2-c1-c0)-1;
        }
        else total+=(len-c1-c0)-1;
        len--;
    }
        cout<<total<<endl;
}
}
