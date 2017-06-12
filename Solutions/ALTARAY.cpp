#include<iostream>
using namespace std;
int main(){
std::ios::sync_with_stdio(false);
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int a[n];
    int c=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-1;j++){
            if(a[j]>0){
                if(a[j+1]<0) c+=1;
                else break;
            }
            else if(a[j]<0){
                if(a[j+1]>0) c+=1;
                else break;
            }
        }
        cout<<c<<" ";
        c=1;
    }
    cout<<"1"<<endl;
    }
}
