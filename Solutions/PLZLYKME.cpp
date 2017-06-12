#include<iostream>
#include<math.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
long int l,d,s,c;
cin>>t;
while(t--){
    cin>>l>>d>>s>>c;
    if((d-1)*(log(c+1))>=(log(l)-log(s))) cout<<"ALIVE AND KICKING"<<endl;
    else cout<<"DEAD AND ROTTING"<<endl;
}
}

/*
Problem Statement -
 In a far away dystopian world, the measure of the quality of a person’s life
 is the numbers of likes he gets for an article about their life. For a person to stay alive,
 he has to acquire at least L number of likes before D days pass.

People in this world employ various techniques to increase the number of likes. One of the famous ones is to
dis-like and re-like their own article once per day. On doing so you can assume that the number of likes for
the post increase by a constant factor C.

So if one starts with S likes on Day-1, he would have D2 = S + C * S likes on Day-2, D3 = D2 + D2 * C on Day-3 etc.
You are to answer if the person would survive at the end of Day-D or not.

Answer -
Number of likes at end of D days = s((1+c)^(d-1))
Given that number of likes at end of D days MUST be GREATER THAN OR EQUAL to L,
=> S((1+c)^(d-1))   >=  l
Bringing S to RHS (can be done as S is +ve) and taking Log both sides,
(d-1)*(log(c+1))    >=  (log(l)-log(s));
If this is satisfied, person is alive, else dead.
