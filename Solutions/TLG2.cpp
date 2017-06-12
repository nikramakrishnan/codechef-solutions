#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int p1,p2,lead=0,f;
for(int i=0;i<n;i++){
    cin>>p1;
    cin>>p2;
    if(p1>p2 && (p1-p2)>lead){
        f=1;
        lead=p1-p2;
    }
    else if(p2>p1 && (p2-p1)>lead)
    {
        f=2;
        lead=p2-p1;
    }
}
cout<<f<<" "<<lead;
return 0;
}
