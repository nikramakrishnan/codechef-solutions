#include<iostream>
using namespace std;
int gcd(int,int);
int main(){
int t,n,ans;
cin>>t;
while(t--){
    cin>>n;
    int flag=0;
    long int a[n];
    long int min=1000000001;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<min) min=a[i];
    }
    ans=a[0];
    for(int i=1;i<n;i++){
        ans=gcd(ans,a[i]); //This finds GCD of numbers 2 at a time and uses the previous GCD to calculate the next one.
    }
    cout<<ans<<endl;
}
}
int gcd(int a, int b){
    if(b==0) return a;
    int temp;
    while(b>0){
        temp=a%b; //This is the remainder when a is divided by b and will be later stored in b.
        a=b; //Even if b>a, the values are swapped here
        b=temp; //b is assigned temp so the loop goes on till b becomes 0 i.e. remainder of a/b is 0.
    }
    return a; //As a will be assigned the final value when the remainder becomes 0, it is the required GCD.
}
