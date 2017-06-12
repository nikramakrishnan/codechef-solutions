#include<iostream>
using namespace std;
int main(){
int t,num,c;
cin>>t;
for(int i=0;i<t;i++){
    cin>>num;
    int c=0;
    for(int j=5;num/j>=1;j*=5){
        c+=num/j;
    }
    cout<<c<<endl;
}
}
