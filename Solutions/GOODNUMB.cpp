#include<iostream>
#include<math.h>
using namespace std;
int checkgood(int);
int findsum(int);
int findprime(int);
int checkprime(int);

int main(){
ios::sync_with_stdio(false);
int t,l,r,check,finalsum;
cin>>t;
while(t--){
    cin>>l>>r;
    finalsum=0;
    while(l<=r){
        check=checkgood(l);
        if(check==1){
            finalsum+=findsum(l);
        }
        l++;
    }
    cout<<finalsum<<endl;
}
}
int checkgood(int x){
    int n,s,c,res;
    int sum=0,sq,flag=0;
    n=sqrt(x);
    for(int i=2;i<=n;i++){
        sq=i*i;
        if((x%sq)==0) {flag=1;break;}
    }
    if(flag!=1){
        //cout<<"Number "<<x<<" is square free. Starting test."<<endl;
        s=findsum(x);
        //cout<<"Sum of divisors of "<<x<<" is "<<s<<endl;
        c=findprime(s);
        //cout<<"Number of prime numbers dividing "<<s<<" is "<<c<<endl;
        res=checkprime(c);
        if(res==1) return 1;
    }
}
int findsum(int x){
    int s=0;
    for(int i=1;i<=x;i++){
        if((x%i)==0) s+=i;
    }
    return s;
}
int findprime(int s){
    int c=0,flag=0,check=0;
    check=checkprime(s);
    if(check!=1){
    for(int i=2;i<=s/2;i++){
        if((s%i)==0){
            flag=0;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){flag=1;break;}
            }
            if(flag!=1) c++;
        }
    }
    return c;
    }
    else return 1;
}
int checkprime(int c){
    int flag=0;
    if(c==0 || c==1 || c==2) flag=1;
    for(int i=2;i<=c/2;i++){
        if((c%i)==0) {flag=1;break;}
    }
    if(flag!=1) return 1;
}
