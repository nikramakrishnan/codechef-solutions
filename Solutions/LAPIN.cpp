#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
string s;
while(t--){
    cin>>s;
    int mid=(s.length()/2); //Defines MID of the string
    int p2;
    (s.length()%2==0) ? (p2=mid) : (p2=mid+1); //If length of string is odd, we need to exclude the mid character before checking
    int flag=0; //Set the flag to default 0
    for(int i=0;i<mid;i++){
        int c1=0,c2=0; //Sets the counts to 0 before beginning to count each character from s[0] to s[mid]
        for(int j=0;j<mid;j++){
            if(s[i]==s[j]) c1++; //Increments c1 if character s[i] is found in first half
        }
        for(int j=p2;j<(s.length());j++){
            if(s[i]==s[j]) c2++; //Increments c2 if character s[i] is found in second half
        }
        if(c1!=c2) {flag=1;break;} //If count is not same, set the flag and break the loop
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}
