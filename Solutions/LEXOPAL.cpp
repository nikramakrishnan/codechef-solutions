#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n=s.length();
    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='.' && s[n-i-1]!='.'){
            if(s[i]!=s[n-i-1]){
                flag=1;
                break;
            }
        }
        else if(s[i]=='.' && s[n-i-1]!='.') s[i]=s[n-i-1];
        else if(s[i]!='.' && s[n-i-1]=='.') s[n-i-1]=s[i];
        else if(s[i]=='.' && s[n-i-1]=='.') {
            s[i]='a';
            s[n-i-1]='a';
        }
    }
    if(flag==1) cout<<"-1"<<endl;
    else cout<<s<<endl;
}
}
