//Just tryin' out some nested conditional operators. Good luck decoding it. Hehehe
#include<iostream>
using namespace std;
int main(){
int t,a,b;
cin>>t;
while(t--){
    cin>>a>>b;
    (!(a==b)) ?
    ((a>b) ? (cout<<">"<<endl) : (cout<<"<"<<endl)):
    (cout<<"="<<endl);
}
}
