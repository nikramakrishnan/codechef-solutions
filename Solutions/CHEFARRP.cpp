//TO DO
#include<iostream>
using namespace std;
int main(){
int t,n,a[50],c;
cin>>t;
while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    c=0;
    for(int j=0;j<n;j++){
        int sum=0,product=1;
        for(int k=0;k<j;k++){
            sum+=(a[k]);
            product*=(a[k]);
            if(sum==product) c+=1;
        }
    }
    cout<<c<<endl;
}
}
