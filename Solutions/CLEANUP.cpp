#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t,n,m;
cin>>t;
while(t--){
    cin>>n>>m;
    int job[1005]={0},complete,chef=0,as=1,jobc[1001],joba[1001],x=0,y=0;
    for(int i=0;i<m;i++){
        cin>>complete;
        job[complete-1]=1;
    }
    for(int i=0;i<n;i++){
        //cout<<"LOOP STARTED"<<endl;
        if(job[i]!=1){
            //cout<<"IF Condition 1 satisfied"<<endl;
            if(chef==0){
                jobc[x]=i+1;
                x++;
                chef=1;
                as=0;
            }
            else if(as==0){
                joba[y]=i+1;
                y++;
                as=1;
                chef=0;
            }

        }
    }
    for(int i=0;i<x;i++){
        cout<<jobc[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<y;i++){
        cout<<joba[i]<<" ";
    }
    cout<<endl;
}
}
