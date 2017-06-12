#include<iostream>
#include<ctype.h>
#include<cstring>
#include<string>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,ch,ch2,ins;
char x[1001];   //We use char so that we can map the char to their numbers
cin>>t;
while(t--){
    cin>>x;
    ch=x[0] - 'a'; //What this does is map x[0] to its respective character number starting from 'a' (ASCII stuff)
    ins=2; //Two instructions, one to load number, another to print it.
    for(int i=1;x[i];i++){
        ch2=x[i] - 'a'; //Maps x[i] to its character number.
        while(ch!=ch2){ //This counts the number of instructions required till we reach the required character
            ch=(ch+1)%26; //Mod 26 because after z we come back to a.
            ins++;
        }
        ins++; //Printing the required character requires another instruction.
    }
    if(ins<=11*strlen(x)){cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
}
}
