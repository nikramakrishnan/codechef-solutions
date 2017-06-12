#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,rem;
long long int k;
cin>>t;
while(t--){
    cin>>k;
    cout<<"3";
    rem=103993%33102; //This sets the remainder so that we can start the calculation
    if(k>0) cout<<".";
    while(k--){
        rem*=10; //Multiply remainder by 10 as we do in normal division
        if(rem>=33102) cout<<rem/33102; //Divide further and display the quotient (single digit)
        else cout<<"0"; //If adding one 0 isn't enough then add one more 0 to quotient and then try the loop again
        rem=rem%33102; //This is the remainder for the next step.
    }
    cout<<endl;
    }
}
