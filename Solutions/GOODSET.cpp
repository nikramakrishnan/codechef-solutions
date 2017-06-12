#include<iostream>
using namespace std;

int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    long int a[4];
    a[0]=1;
    a[1]=2;
    a[2]=4;
    a[3]=7;
    for(int i=0;i<n;i++){
        if(i<=3){
            cout<<a[i]<<" ";
        }
        else{
            cout<<a[3]+(3*(i-3))<<" ";
        }
    }
    cout<<"\n";
}
}
