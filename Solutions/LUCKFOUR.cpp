#include<iostream>
using namespace std;
int main(){
int x,c;
long int t;
long long int n;
cin>>t;
for(int i=0;i<t;i++){
    cin>>n;
    c=0;
    for(int j=0;n>0;j++){
       x=n%10;
       n=n/10;
       if(x==4) c+=1;
    }
    cout<<c<<endl;
}
}
