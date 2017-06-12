/*
ASCII Table - http://www.asciitable.com/index/asciifull.gif
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
string a,b;
cin>>t;
while(t--){
    int counta[123]={0};
     int countb[123]={0};
    cin>>a>>b;
    int c=0;
    for(int i=0;i<a.length();i++){
            counta[a[i]]++;
    }
        for(int i=0;i<b.length();i++){
            countb[b[i]]++;
    }
    for(int j=0;j<123;j++){
        c+=min(counta[j],countb[j]);
    }
    cout<<c<<endl;
}
}
