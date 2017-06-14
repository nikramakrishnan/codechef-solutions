#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  int a,b,c,d;
  cin>>t;
  while (t--) {
    cin>>a>>b>>c>>d;
    long long int glob_count=0;
    for(int i=a;i<=b;i++){
      if(c>i){
        glob_count+=(d-c)+1;
      }
      else if(i<d){
        glob_count+=((d-c)+1)-(i-c+1);
      }
      else{
        break;
      }
    }
    cout<<glob_count<<"\n";
  }
}
