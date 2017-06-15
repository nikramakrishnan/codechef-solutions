#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  string s;
  while (t--) {
    int n,time;
    cin>>n;
    int x1,x2,y1,y2,sum1,sum2;
    x1=x2=y1=y2=0;
    for(int i=0;i<n;i++){
      cin>>time;
      if(i%2==0) x1+=time;
      else x2+=time;
    }

    for(int i=0;i<n;i++){
      cin>>time;
      if(i%2==0) y1+=time;
      else y2+=time;
    }
    sum1=x1+y2;
    sum2=x2+y1;
    if(sum1>sum2) cout<<sum2<<endl;
    else cout<<sum1<<endl;

  }
}
