#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int p1[n],p2[n],l1[n],l2[n];
for(int i=0;i<n;i++){
    cin>>p1[i];
    cin>>p2[i];
    if(p1[i]>p2[i]){
        l1[i]=p1[i]-p2[i];
        l2[i]=0;
    }
    else{
        l2[i]=p2[i]-p1[i];
        l1[i]=0;
    }
}
    sort(l1,l1+n);
    sort(l2,l2+n);
if(l1[n-1]>l2[n-1])
    cout<<1<<" "<<l1[n-1];
else
    cout<<2<<" "<<l2[n-1];
}
