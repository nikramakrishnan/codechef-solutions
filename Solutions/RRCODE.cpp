#include<iostream>
using namespace std;
int f(int n1,int k1,int ans1,int dowhat,int a1[]);
int main(){
ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--){
    int n,k,answer,dothis=0;
    string op;
    cin>>n>>k>>answer;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>op;
    if(op=="XOR") dothis=1;
    else if(op=="OR")  dothis=2;
    else if(op=="AND") dothis=3;
    answer=f(n,k,answer,dothis,a);
    cout<<answer<<endl;
}
}
int f(int n1,int k1,int ans1,int dowhat,int a1[]){
        for(int j=0;j<n1;j++){
            switch(dowhat){
            case 1:
                ans1=ans1^a1[j];
                break;
            case 2:
                ans1=ans1|a1[j];
                break;
            case 3:
                ans1=ans1&a1[j];
            }
        }
    return ans1;
}
