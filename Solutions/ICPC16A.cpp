#include <iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while (t--) {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
      if(y2>y1) std::cout << "up" << '\n';
      else std::cout << "down" << '\n';
    }
    else if(y1==y2){
      if(x2>x1) std::cout << "right" << '\n';
      else std::cout << "left" << '\n';
    }
    else{
      std::cout << "sad" << '\n';
    }
  }
}
