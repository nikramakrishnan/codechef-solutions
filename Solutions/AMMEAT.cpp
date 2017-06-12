#include<iostream>
#include<algorithm>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t,n;
long long int m;
cin>>t;
while(t--){
    cin>>n>>m;
    int c=0;
    long long int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);    //This sorts the array
    int j=n-1;  //To iterate the loop from n-1 to 1
    while(j>=0 && m>0){ //Loop while array is in bounds AND the number of meatballs left to take is greater than 0;
        c++; //Increase the count after adding
        m-=p[j]; //Subtract the amount from m so that we can check in the next iteration if m is satisfied
        //cout<<"Current value of m="<<m<<endl;
        j--;
    }
    if(m>0) cout<<"-1"<<endl;
    else cout<<c<<endl;
}
}
