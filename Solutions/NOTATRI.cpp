#include<iostream>
#include<algorithm>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int n,j,k;
while(true){
cin>>n;
if(n!=0){
    long int l[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
sort(l,l+n);
for(int i=n-1;i>=2;i--){
    j=i-1;
    k=0;
    while(k<j){
        if(l[i]>(l[j]+l[k])){
            count+=j-k;
            ++k;
        }
        else j--;
    }
}
cout<<count<<endl;
}
else break;
}
return 0;
}
