#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false); //Fast I/O
int t,n,m;
cin>>t;
while(t--){
    cin>>n>>m;
    int a[n];
    int maxm=0,c=0; //We need max number to exclude it from the addition process
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxm=max(a[i],maxm); //Stores max in maxm
    }
    // cout<<"Max val="<<maxm<<endl;
    for(int i=0;i<n;i++){
        if(a[i]<maxm && m>=(maxm-a[i])){ //Checks if (1. Number is less than max) and (2. There is enough m to add to the number)
            //cout<<"Incrementing "<<a[i]<<" to "<<a[i]+(maxm-a[i])<<endl;
            m-=(maxm-a[i]); //Subtract from a[i]
            a[i]+=maxm-a[i]; //Add to a[i]
            //cout<<"m="<<m<<endl;
        }
        if(a[i]==maxm) c++; //If all numbers have become equal (to maxm), then c==n will be true
    }
    //cout<<"Final c="<<c<<"\nFinal m="<<m<<endl;
    if(c==n && m%n==0) cout<<"Yes"<<endl; //If there's more m left, it has to be a multiple of n as adding them will again make all a[i] equal
    else cout<<"No"<<endl;
}
}
