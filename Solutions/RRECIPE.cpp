#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,flag,len,hlen;
long long int ans;
string s;
cin>>t;
while(t--){
    cin>>s;
    len=s.length();
    if(s.length()%2==0) hlen=s.length()/2;
    else hlen=(s.length()/2)+1;
    ans=1;
    flag=0;
    if(len>1){
    for(int i=0;i<hlen;i++){
        if(s[i]==s[len-i-1]){
            if(s[i]=='?'){
                ans*=26;
                ans=ans%10000009;
            }
        }
        else if(s[i]=='?' && s[len-i-1]!='?'){
            ans*=1;
        }
        else if(s[i]!='?' && s[len-i-1]=='?'){
            ans*=1;
        }
        else {flag=1;break;}
    }
    }
    else{
        if(s[0]=='?') ans=26;
        else ans=1;
    }
    if(flag!=1){
        cout<<ans<<endl;
    }
    else cout<<"0"<<endl;
}
}
