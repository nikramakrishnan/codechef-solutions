#include<iostream>
using namespace std;
int main(){
int t,n,f,c;
cin>>t;
while(t--){
    cin>>n;
    c=0;
    int s1[n];
    for(int i=0;i<n;i++){
        cin>>s1[i];
    }
    cin>>f;
    int s2;
    for(int j=0;j<f;j++){
        cin>>s2;
        for(int k=0;k<n;k++){
            if(s1[k]==s2) {
                    c+=1;
                    break;
            }
        }
    }
    if(c==f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
}
