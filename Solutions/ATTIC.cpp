#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
string p;
cin>>t;
while(t--){
    cin>>p;
    int i=0,maxdot=0,c=0,finalc=0;
    while(i<p.length()){
        if(p[i]=='.'){
            c=0;
            while(p[i]!='#'){
                c++;
                i++;
            }
            //cout<<"Number of dots="<<c<<endl;
            if(c>maxdot){
                //cout<<"Number of dots is greater than earlier"<<endl;
                maxdot=c;
                finalc++;
            }
        }
        else i++;
    }
    cout<<finalc<<endl;
}
}
