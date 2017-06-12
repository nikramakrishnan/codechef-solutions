//Array not required. can be removed. Waste of memory.
#include<iostream>
using namespace std;
int main(){
int t;
long long int n,k,c,x,y;
cin>>t;
while(t--){
    cin>>n>>k;
    c=0;
    long long int g;
    for(int i=0;i<n;i++){
        cin>>g;
        if(!(g%k==0)) {
            x=g%k;
            y=k-x;
            if(y>x && !(g-x==0)) c+=x; //the && condition ensures that the number of grapes in the bag is non-zero
            else c+=y;
        }
    }
    cout<<c<<endl;
}
}
