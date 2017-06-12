#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n+1],flag[n+1],j,count,first;
for(int i=1;i<=n;i++){
    cin>>a[i];
    flag[i]=0;
}
j=1;
count=0;
for(int i=1;i<=n;i++){
    while(flag[j]!=1){
        flag[j]=1;
        j=a[j];
    }
    for(int k=1;k<=n;k++){
        if(flag[k]==0){
            count++;
            //cout<<"Count incremented at k="<<k<<endl;
            j=k;
            break;
        }
    }
}
cout<<count+1<<endl;
for(int i=1;i<=n;i++){
    flag[i]=0;
}
j=1;
for(int i=1;i<=count+1;i++){
    first=j;
    while(flag[j]!=1){
        flag[j]=1;
        cout<<j<<" ";
        j=a[j];
    }
    cout<<first<<endl;
    for(int k=1;k<=n;k++){
        if(flag[k]==0){
            j=k;
            break;
        }
    }
}
}
