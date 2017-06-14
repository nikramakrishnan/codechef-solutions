#include<iostream>
using namespace std;

int main() {
  int tc,n,k,t,d,sess_data,glob_time=0,time_diff,charge=0,flag=0;
  cin>>tc;
  while (tc--) {
    glob_time=0;
    time_diff=0;
    charge=0;
    flag=0;
    cin>>n>>k;
    while (n--) {
      cin>>t>>d;
      glob_time+=t;
      if(flag==1){
        charge+=t*d;
      }
      if(glob_time>=k && flag==0){
        time_diff=glob_time-k;
        charge+=time_diff*d;
        flag=1;
      }
    }
    cout<<charge<<"\n";
  }
  return 0;
}
