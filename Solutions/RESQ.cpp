//Program finds the optimal rectangle. It is a rectangle with minimum difference in length and width.
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
int t,n,root,min,diff,x;
cin>>t;
while(t--){
    cin>>n;
    root=sqrt(n); //This is because the operation is multiplication, and no solution can exist after sqrt(n)
    min=n-1; //Defines the bare minimum. This is also the result when the number is prime
    for(int i=2;i<=root;i++){
        if(n%i==0){ //If the number entered is divisible by i,
            x=n/i; //we find the other multiple
            diff=abs(x-i); //and find the difference between the two multiples
            if(diff<min) min=diff; //then check if the difference is less than the already set min.
        }
    }
    cout<<min<<endl;
}
}
