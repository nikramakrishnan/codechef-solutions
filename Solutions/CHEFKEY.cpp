#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m,c,totalc=0,f2;
    cin>>n>>m>>c;
    cout<<"Input Complete";
    int mxm=max(m,n);
    for(int i=0;i<=mxm;i++){
        cout<<"Loop start";
            if(c%i==0){
                f2=c/i;
            if(f2<=m && f2<=n){
                totalc++;
            }
        }
    }
    cout<<totalc<<endl;
}
}
