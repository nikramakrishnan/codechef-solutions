#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
int t,r,c;
size_t found;
char tofind[105];
cin>>t;
while(t--){
    cin>>r>>c;
    string s[r];
    for(int i=0;i<r;i++){
        cin>>s[i];
        transform(s[i].begin(), s[i].end(), s[i].begin(),::tolower);
        found=s.find("spoon");
        if(found!=string::npos) flag=1;
    }
    for(int j=0;j<c;j++){
        tofind[]
    }
    if(flag==1) cout<<"There is a spoon!"<<endl;
}
}
