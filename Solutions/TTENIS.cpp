#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  string s;
  while (t--) {
    cin>>s;
    if(s[s.length()-1]=='1'){
        cout<<"WIN\n";
    }
    else{
        cout<<"LOSE\n";
    }
  }
}
