#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
int t;
long long int a;
cin>>t;
long double p,q,x,base,ht,dis,h;
while(t--){
    cin>>h>>a;
    dis=(pow(h,4))-(16*a*a);
    if(dis>=0){
        p=((h*h)+sqrt(dis))/2;
        q=((h*h)-sqrt(dis))/2;
        if(p>0){
            base=sqrt(p);
            ht=(2*a)/base;
            if(base>ht) cout<<fixed<<setprecision(5)<<ht<<" "<<base<<" "<<h<<endl;
            else cout<<fixed<<setprecision(5)<<base<<" "<<ht<<" "<<h<<endl;
        }
        else if(q>0){
            base=sqrt(q);
            ht=(2*a)/base;
            if(base>ht) cout<<fixed<<setprecision(5)<<ht<<" "<<base<<" "<<h<<endl;
            else cout<<fixed<<setprecision(5)<<base<<" "<<ht<<" "<<h<<endl;
        }
        else cout<<"-1"<<endl;
    }
    else cout<<"-1"<<endl;
}
}
