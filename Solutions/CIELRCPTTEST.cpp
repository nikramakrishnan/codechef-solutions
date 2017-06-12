#include<iostream>
#include<math.h>
using namespace std;
int findnear(int);
int main(){
int t,p,near,f=0;
cin>>t;
for(int i=0;i<t;i++){
    cin>>p;
    near=findnear(p);
    cout<<near;
    }
} //END OF MAIN

int findnear(int x){
int y=1, z=0;
if(x<=2048){
    while(x>=y){
        z+=1;
        y=pow(2.0,z);
    }
    y=pow(2.0,z-1);
}
return y;
}
