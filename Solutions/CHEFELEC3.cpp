#include<iostream>
#include<string>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(){
ios::sync_with_stdio(false);
long long int t,n,i,j;
char s[100005];
cin>>t;
while(t--){
    cin>>n;
    cin>>s;
    long long int x[n];
    long long int totalc=0,pos=0,pos2=0;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    if(s[0]=='0'){
        i=0;
        while(s[i]!='1'&& i<strlen(s)-1){
            totalc+=x[i+1]-x[i];
            i++;
        }
    pos=i;
    }
    //cout<<"Precount is "<<totalc<<endl;
    while(pos<strlen(s)){
        i=pos+1;
        while(s[i]!='1'&& i<strlen(s)){
            i++;
        }
    pos2=i;
    //cout<<"Current pos1="<<pos<<"& pos2="<<pos2<<endl;
    if(pos2<strlen(s)){
    for(j=pos+1;j<pos2;j++){
      if((x[j]-x[pos])<x[pos2]-x[j]) totalc+=(x[j]-x[j-1]);
      else totalc+=(x[j+1]-x[j]);
    }
    }
    else{
            //cout<<"No more 1s found"<<endl;
        for(j=pos;j<strlen(s)-1;j++){
            totalc+=x[j+1]-x[j];
        }
    }
    pos=pos2;
}
cout<<totalc<<endl;
}
}
