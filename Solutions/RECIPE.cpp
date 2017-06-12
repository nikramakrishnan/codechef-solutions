//First take input t and n and stuff, then find the hcf of the numbers entered, then divide and display the array
//Process-
//To find hcf, I create a copy of the input array, then sorted it (so that I can find the smallest number among them)
//Then, I divide each number in the non-sorted array with every number from 1 to the smallest number (s[0])
//If all numbers are divisible by that number, hcf is set to that number.
//This process continues till the last digit that is s[0]
//Thank me later
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t,n,d[50],s[50],f=0,hcf=1;
cin>>t;
for(int i=0;i<t;i++){
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>d[j];
        s[j]=d[j];
    }
    sort(s,s+n);
    for(int k=1;k<=s[0];k++){
        for(int l=0;l<n;l++){
            if(d[l]%k==0) f=1;
            else {f=0;break;}
        }
        if(f==1) hcf=k;
    }
    for(int m=0;m<n;m++){
    cout<<d[m]/hcf<<" ";
    }
    cout<<endl;
    }
}
