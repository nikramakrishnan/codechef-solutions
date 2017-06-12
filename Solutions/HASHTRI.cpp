#include<iostream>
using namespace std;
int main(){
int i;
cout<<"Enter height of pyramid=";
cin>>i;
for(int n=0;n<i;n++){
    for(int j=i-n-1;j>0;j--){
        cout<<" ";
    }
    for(int x=0;x<n+1;x++){
        cout<<"#";
    }
    cout<<endl;
}
}
