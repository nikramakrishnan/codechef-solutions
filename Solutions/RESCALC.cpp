#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int c[n];
    int type[n][7];
    for(int i=0;i<n;i++){
        cin>>c[i];
        for(int j=0;j<c[i];j++){
            cin>>type[i][j];
        }
    }
}
}
