#include<iostream>
#include<algorithm>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,n,fix;
cin>>t;
while(t--){
    cin>>n;
    int flag=1,count=0,fix2;
    int w[n];
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    sort(w,w+n);
    fix=n-1;
    fix2=fix;
    for(int i=0;i<n-1;i++){
        //cout<<"Comparing "<<w[i]<<" and "<<w[i+1]<<endl;
        if(w[i]!=w[i+1]) {flag=0;break;}
    }
    while(flag!=1){
        //cout<<"Flag is 0. While started\n\nArray after Increment-"<<endl;
        for(int i=0;i<n;i++){
            if(i!=fix){
                w[i]++;
            }
            //cout<<w[i]<<" ";
            if(w[i]>w[fix]) fix2=i;
        }
        //cout<<"Fix2="<<w[fix2]<<" at w["<<fix2<<"]"<<endl;
        //cout<<"\nIncrement complete"<<endl;
        count++;
        flag=1;
        fix=fix2;
        for(int i=0;i<n-1;i++){
        if(w[i]!=w[i+1]) {flag=0;break;}
        }
    }
    cout<<count<<endl;
}
}
