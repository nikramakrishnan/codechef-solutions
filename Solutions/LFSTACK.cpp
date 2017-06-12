#include<iostream>
using namespace std;
int main(){
int t;
while(t--){
    int n,sum=0,seq,flag,superflag=0;
    cin>>n;
    int b[n][1007],a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        for(int j=a[i]-1;j>=0;j++){
            cin>>b[i][j];
        }
    }
    for(int k=0;k<sum;k++){
        cin>>seq;
        for(int l=0;l<n;l++){
            flag=0;
            if(a[l]>0 && superflag==0){
                if(b[l][0]==seq){
                    for(int m=0;m<a[l]-1;m++){
                        b[l][m]=b[l][m+1];
                    }
                    a[l]--;
                    flag=1;
                }
                if(flag==0){
                    superflag=1;
                    break;
                }
            }
        }
    }
    if(superflag==1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

}
}
