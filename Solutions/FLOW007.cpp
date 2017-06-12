//So we are finding the reverse of the entered integer. The catch is that we need to eliminate trailing 0s.
//This is very simple and can be done in one line. See below.
#include<iostream>
using namespace std;
int main(){
int t,n;
cin>>t;
for(int i=0;i<t;i++){
    cin>>n;
    while(n%10==0) {n=n/10;}  //Eliminates all trailing zeroes
    for(int j=0;n>0;j++){
        cout<<n%10;
        n=n/10;
    }
    cout<<endl;
}
}
