#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t,n,k;
cin>>t;
while(t--){
    int sum1=0,sum2=0,diff;
    cin>>n>>k;
    int w[n];
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    sort(w,w+n);
    if(k>n/2) k=n-k;  //IF the division is greater than half of n, then it will change k to n-k so that the child carries less weight
    for(int i=0;i<k;i++){
        sum1+=w[i];  //Adds weight that the child must carry
    }
    for(int j=k;j<n;j++){
        sum2+=w[j]; //Adds weight that the chef must carry
    }
    diff=sum2-sum1;
    cout<<diff<<endl;
}
}
