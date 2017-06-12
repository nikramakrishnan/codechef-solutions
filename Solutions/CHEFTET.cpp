#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
long int n;
cin>>t;
while(t--){
    cin>>n;
    long long int a[n],b[n],p1,p2,x1,x2,x3,q1,q2,q3,r1,r2,fix;
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    p1=b[0]+a[0];
    p2=b[0]+a[1];
    if(n>1){
        x1=b[1]+a[0];
        x2=b[1]+a[1];
        x3=b[1]+a[2];
        if(x1==p1 || x2==p1 || x3==p1) fix=p1;
        else if(x1==p2 || x2==p2 || x3==p2) fix=p2;
        else{flag=1;}
        cout<<"Sum fixed at "<<fix<<endl;
    }
    else{
        fix=b[0]+a[0];
    }
    if(flag==0 && n>1){
        for(int i=2;i<n-1;i++){
            q1=b[i]+a[i-1];
            q2=b[i]+a[i];
            q3=b[i]+a[i+1];
            cout<<"q1="<<q1<<"\nq2="<<q2<<"\nq3="<<q3<<endl;
            if(q1==fix || q2==fix || q3==fix){
                flag=0;
                cout<<"flag set to 0 because fix found"<<endl;
            }
            else {flag=1;break;}
        }
        r1=b[n-1]+a[n-2];
        r2=b[n-1]+a[n-1];
        if(r1!=fix && r2!=fix) flag=1;
    }
    if(flag==0) cout<<fix<<endl;
    else cout<<"-1"<<endl;
}
}
