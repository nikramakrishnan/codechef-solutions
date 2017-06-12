#include<iostream>
using namespace std;
int main(){
int n,pos,curr;
cin>>n;
int p[n+1],flag[n+1],j=1,c=0;
for(int i=1;i<=n;i++){
cin>>p[i];
flag[i]=0;
}
for(int i=1;i<=n;i++){
    while(flag[j]!=1){
        flag[j]=1;
        j=p[j];
    }
    for(int k=0;k<=n;k++){
        if(flag[k]==0){
            c++;
            j=k;
            break;
        }
    }
}
cout<<c<<endl;
for(int i=1;i<=n;i++){
    flag[i]=0;
}
j=1;
for(int i=1;i<c+1;i++){
    curr=j;
    while(flag[j]!=1){
        cout<<j<<" ";
        flag[j]=1;
        j=p[j];
    }
    cout<<curr<<endl;
    for(int k=0;k<=n;k++){
        if(flag[k]==0){
            j=k;
            break;
        }
    }
}
}
