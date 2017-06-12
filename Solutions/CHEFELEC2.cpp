#include<iostream>
#include<string>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(){
int t;
long long int n,i;
char s[100005];
cin>>t;
while(t--){
    cin>>n;
    long long int totalc=0,pos=0;
    long long int x[n];
    cin>>s;
    //cout<<"Data Analysis\n\nStelen="<<strlen(s)<<"\nStrlen-1="<<strlen(s)-1<<"\nFirst char="<<s[0]<<"\n\n";
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    if(s[0]=='0'){
        i=0;
        while(s[i]!='1' && i<strlen(s)-1){
                //cout<<"Pre-counting\n";
            totalc+=x[i+1]-x[i];
            i++;
        }
        pos=i;
    }
    while(pos<strlen(s)){
            i=pos;
            //cout<<"Outer while of post counting\n";
        while(s[pos+1]!='1' && pos<(strlen(s)-1)){
            //cout<<"Inner while of post counting\n";
            totalc+=x[pos+1]-x[pos];
            pos++;
        }
        if(i==pos){pos++;}
    }
    cout<<totalc<<endl;
}
}
