#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long int t,temp;
cin>>t;
int a[t];
for(int i=0;i<t;i++){
    cin>>a[i];
}
sort (a,a+t);
for(int j=0;j<t;j++){
    cout<<a[j]<<endl;
}
}
