#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int n;
long long int k,maxm=0,minm=2000000007;
cin>>n>>k;
long long int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    maxm=max(maxm,a[i]);
    minm=min(minm,a[i]);
}
if(k%2==0 && k!=0){ //IF the number of moves is even (except 0) then the final answer will be fixed.
    for(int i=0;i<n;i++){
        a[i]=a[i]-minm;
    }
}
else if(k%2==1){ ////IF the number of moves is odd then the final answer will be fixed.
    for(int i=0;i<n;i++){
        a[i]=maxm-a[i];
    }
}
//No changes if k=0
//OUTPUT
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
/*
Explanation-
Let n=4 and k vary from 0 to any positive integer.
Let the four numbers be x,y,z,w such that w>x>y>z

Variable -  x           y           z           w
Step|
1          w-x         w-y         w-z          0
2          x-z         y-z          0          w-z              (as w-z will become greatest after 1st operation because z is smallest)
3          w-x         w-y         w-z          0
4          x-z         y-z          0          w-z

So, for any even step, the answer will be of the same type, and for any odd step, the answer will be of the same type.
*/
