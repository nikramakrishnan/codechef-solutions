#include<iostream>
using namespace std;
int main(){
int flag=0;
double a,b,c,d,div1,div2,div3,div4,div5,div6;
cin>>a>>b>>c>>d;
div1=a/b;
div2=a/c;
div3=a/d;
div4=b/c;
div5=b/d;
div6=c/d;
if(div1==div6) {flag=1;}
else if(div2==div5) flag=1;
else if(div3==div4) flag=1;
if(flag==1) cout<<"Possible"<<endl;
else cout<<"Impossible"<<endl;
}
