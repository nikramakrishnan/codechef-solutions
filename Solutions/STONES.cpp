#include<iostream>
using namespace std;
int main(){
int t,ok,c,internal;
string j,s;
cin>>t;
while(t--){
    cin>>j>>s; //j=number of jewels, s=string of stones dug out
    c=0;ok=0;internal=0;
    for(int i=0;i<s.length();i++){ //for each character in the string of dug out stones
        ok=0;internal=0;
        for(int x=0;x<j.length();x++){ //this loop checks whether the character in string s is a part of j
            if(s[i]==j[x]) { //check if ith char of stones is same as xth char in j. Read above to know why
                for(int y=0;y<i;y++){ //this loop checks if the character has been already counted once
                    if(s[i]==s[y]) {internal=1;} //This sets internal to 1 if the character has been counted already
                }
                if(internal==0) {ok=1;break;} //if internal remains 0, character is ok to be counted, sets ok to 1
            }
        }
        if(ok==1){ //checks if the previous loop allowed the ith character in s to be counted
            for(int z=0;z<s.length();z++){ //counting begins
                if(s[z]==s[i]) c++; //count
            }
        }
}
cout<<c<<endl;
}
}
