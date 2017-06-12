#include<iostream>
using namespace std;
int main(){
int t,n,first,second;
string s;
cin>>t;
while(t--){
    cin>>n;
    long long int x[n];
    long long int totalc=0;
    cin>>s;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int j=0; //This will be the pos of first 1;
    if(s[0]=='0'){
        //cout<<"Counting distance of 0s before first 1"<<endl;
        while(s[j]!='1') j++;
        totalc+=x[j]-x[0];
        //cout<<"Distance of 0s before first 1="<<totalc<<endl;
    }
    first=j;
    second=j+1;
    while(second<n-1){
    //cout<<"LOOP NUM 1"<<endl;
    while(s[second]!='1' && second<n) second++;
    //cout<<"Second="<<second<<endl;
    if(s[second]=='1'){
        //cout<<"Entered IF"<<endl;
       while(x[j+1]-x[first]<=x[second]-x[j+1] && j<second) j++;
       //cout<<"Breakpos="<<j<<endl;
       totalc+=x[j]-x[first];
       totalc+=x[second]-x[j+1];
       first=second;
    }
    else break;
    second++;
    }
    //cout<<"First="<<first<<"\nSecond="<<second<<endl;
    if(s[n-1]=='0') totalc+=x[n-1]-x[first];
    cout<<totalc<<endl;
}
}
