// WARNING: Only passes the first set of constraints
#include <iostream>
using namespace std;
bool contains(int[],int,int);
int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while (t--) {
    int count=0;
    int n,m;
    cin>>n>>m;
    int alice[n],berta[m];
    for(int i=0;i<n;i++){
      cin>>alice[i];
    }
    for(int j=0;j<m;j++){
      cin>>berta[j];
      if(contains(alice,berta[j],n)) count+=1;
    }
    std::cout << count << '\n';
  }
}

bool contains(int a[],int b,int n){
  bool found=false;
  for(int i=0;i<n;i++){
    if(a[i]==b){
      found=true;
      break;
    }
  }
  return found;
}
