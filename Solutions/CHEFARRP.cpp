#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i<n; i++) {
      cin>>a[i];
    }
    int count=0;
    for (int i = 0; i < n; i++) {
      int sum=0,prod=1;
      for (int j = i; j >= 0; j--) {
        sum+=a[j];
        prod*=a[j];

        if(sum==prod) count+=1;
      }
    }
    std::cout << count << '\n';
  }
}
