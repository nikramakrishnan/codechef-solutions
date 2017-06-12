#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--){
    int n;
    int even=0,odd=0,subarr=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
    if(odd%2==0) cout<<n<<endl;
    else{
        for(int j=0;j<n;j++){
            if(a[j]%2==1){
                if(j>subarr) subarr=j;
                if(n-j-1>subarr) subarr=n-j-1;
            }
        }
        cout<<subarr<<endl;
    }
}
}
