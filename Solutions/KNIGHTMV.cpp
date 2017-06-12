#include<bits/stdc++.h>
using namespace std;
int main(){
int t,len;
char s[100];
cin>>t;
getchar();
while(t--){
    gets(s);
    len=strlen(s);
    //The following line checks if all conditions of a correct input are met.
    if(len==5 && s[0]>='a' && s[0]<='h' && s[1]>='1' && s[1]<='8' && s[2]=='-' && s[3]>='a' && s[3]<='h' && s[4]>='1' && s[4]<='8'){
        //The following line checks if the move is a correct knight move, knights work like that.
        if((abs(s[3]-s[0])==1 && abs(s[4]-s[1])==2) ||(abs(s[3]-s[0])==2 && abs(s[4]-s[1])==1)){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    else cout<<"Error"<<endl;
}
}
