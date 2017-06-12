#include<iostream>
using namespace std;
int main(){
int n1,n2,n3,c,num,flag;
cin>>n1>>n2>>n3;
int a1[n1],a2[n2],a3[n3];
for(int i=0;i<n1;i++){
    cin>>a1[i];
}
for(int i=0;i<n2;i++){
    cin>>a2[i];
}
for(int i=0;i<n3;i++){
    cin>>a3[i];
}
int fin[50001];
int arraycount=0;
for(int i=0;i<n1;i++){
    num=a1[i];
    c=1;
    for(int j=0;j<n2;j++){
        if(a2[j]>num) break;
        else
            if(num==a2[j]) c++;
    }
    for(int j=0;j<n3;j++){
        if(a3[j]>num) break;
        else
            if(num==a3[j]) c++;
    }
    if(c>=2) {
        fin[arraycount]=num;
        arraycount++;
    }
}
for(int i=0;i<n2;i++){
    flag=0;
    for(int j=0;j<=arraycount;j++){
    if(a2[i]==fin[j]) break;
    else if(j==arraycount){flag=1;num=a2[i];}
    }
    if(flag==1){
    c=1;
    for(int j=0;j<n3;j++){
        if(a3[j]>num) break;
        else
            if(num==a3[j]) c++;
    }
    if(c>=2) {
        fin[arraycount]=num;
        arraycount++;
    }
    }
}
cout<<arraycount<<endl;
for(int i=0;i<arraycount;i++){
    cout<<fin[i]<<endl;
}
}
