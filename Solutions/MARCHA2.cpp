//Statement doesn't mention that we need to stop reading input where the number of leaves exceeds the stems. Two WAs for nothing :(
#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,flag;
long long int k,a,stem;
cin>>t;
while(t--){
    flag=0;
    stem=1;
    cin>>k;
        for(int i=0;i<k;i++){
            cin>>a;
            if(a>stem){flag=1;break;}
            else(stem=2*(stem-a));
        }
    if(flag==1||stem!=0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
}
