#include<iostream>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    }
int current=(n-1),lowest=(n-1);
long long int product=a[n-1];
cout<<"Initial Product="<<product<<"\n\n";
for(int i=0;i<n;i++){
    if(current>k){
        cout<<"IF Condition satisfied. Current="<<current<<" & k="<<k<<endl;
        for(int j=current-1;j>=current-k;j--){
            if(a[j]<=a[lowest]) lowest=j;
            cout<<"Lowest="<<a[lowest]<<endl;

        }
        product*=a[lowest];
        cout<<"Current Product="<<product<<endl;
        current=lowest;
        cout<<"Current Position="<<a[current]<<"at a["<<current<<"]"<<endl;
    }
    else {
        cout<<"Ending multiplication:"<<endl;
        product*=a[0];
        break;
    }
}
product=product%1000000007;
cout<<product<<endl;
}
