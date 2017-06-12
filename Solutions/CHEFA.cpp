#include<iostream>
#include<algorithm>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,n;
long long int sum;
cin>>t;
while(t--){
    cin>>n;
    long long int a[n];
    sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i-=2){
        sum+=a[i];
    }
    cout<<sum<<endl;
}
}
