/*
I loved this problem!

First time you look at it, seems like the iterations will be infinite, then you narrow it down to n^4, then to n^3, then n^2!
But that won't do it!
We need a O(n) code here.

So this is how it works

1) Look for C,H,E and F in a single iteration
2) While that is happening, if an H is found, and C is not 0, that means we have a CH. So the C count is subtracted. (Because we have "CH")
3) Similarly, if an E is found and CH is not 0, we have another upgraded group CHE, so we subtract one from CH and add it to CHE
4) As soon as we find an F, we check if there is a CHE. If there is, DONE! We found a CHEF. So we add that to CHEF and subtract it from CHE

In this way, we can find all CHEFs hidden in the string in only one traversal!

Read more -
The editorial - discuss.codechef.com/problems/CHRL2
This beautiful solution - https://discuss.codechef.com/questions/37606/chrl2-editorial/37626
*/
#include <iostream>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  string s;
  cin>>s;
  int c,ch,che,chef;
  c=ch=che=chef=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='C'){
        c++;
    }
    else if(s[i]=='H'){
        if(c>0) {c--;ch++;}
    }
    else if(s[i]=='E'){
        if(ch>0) {ch--;che++;}
    }
    else if(s[i]=='F'){
        if(che>0) {che--;chef++;}
    }
  }
  cout<<chef<<"\n";
}
