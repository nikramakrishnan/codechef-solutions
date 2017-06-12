#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    long int n;
    int t,score,sum,flag1,flag2;
    double avg;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;flag1=0;flag2=0;
        for(int i=0;i<n;i++){
            cin>>score;
            if(score==2) flag1=1;
            if(score==5) flag2=1;
            sum+=score;
        }
        avg=sum/n;
        if(avg>=4.0 && flag1==0 && flag2==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
