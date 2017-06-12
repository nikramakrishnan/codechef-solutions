//Should be a Little faster
#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--){
    int n,m,c,mxm,mnm,f2,finalc=0;
    cin>>n>>m>>c;
    mxm=max(n,m);
    mnm=min(n,m);
    for(int i=1;i<=mxm;i++){
        if(c%i==0){
            f2=c/i;
            if(i<=mxm && f2<=mnm){
                finalc+=1;
            }
        }
    }
    cout<<finalc<<endl;
}
}
