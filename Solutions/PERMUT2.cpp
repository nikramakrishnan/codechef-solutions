#include<iostream>
using namespace std;
int main(){
int n,x,flag=0;
while(true){
cin>>n;
int d[n],e[n];
if(n==0) break;
for(int i=0;i<n;i++){
    cin>>d[i];
}
for(int j=0;j<n;j++){
    x=d[j];
    e[x-1]=j+1;
}
for(int k=0;k<n;k++){
    if(e[k]==d[k]) flag=1;
    else {flag=0;break;}
}
if(flag==1) cout<<"ambiguous"<<endl;
else cout <<"not ambiguous"<<endl;;
}
return 0;
}
