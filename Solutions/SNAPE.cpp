#include<iostream>
#include<math.h>
using namespace std;
int main(){
int t,b,ls;
float min,max;
cin>>t;
for(int i=0;i<t;i++){
    cin>>b;
    cin>>ls;
    min=sqrt(pow(ls,2.0)-pow(b,2.0));
    max=sqrt(pow(ls,2.0)+pow(b,2.0));
    cout<<min<<" "<<max<<endl;
}
}
