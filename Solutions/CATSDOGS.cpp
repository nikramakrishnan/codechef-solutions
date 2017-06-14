#include <iostream>
using namespace std;
int main() {
  std::ios_base::sync_with_stdio(false);
  long long int t,c,d,l,min_legs,max_legs;
  cin>>t;
  while (t--) {
    cin>>c>>d>>l;
    max_legs=(c+d)*4;
    if(c>(d*2))
        min_legs=(c-(d*2)+d)*4; //If cats are more than dogs can carry, then min legs will be the when all dogs are carrying 2 cats.
    else
        min_legs=(d*4); //If there are more cats than dogs can carry, then min legs is just the number of legs the dogs have (all cats are on dogs).
    if(l%4==0 && l>=min_legs && l<=max_legs){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
  }
}
