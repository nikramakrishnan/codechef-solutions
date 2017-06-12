#include<iostream>
using namespace std;
int main(){
int t,n,c,x;
cin>>t;
int d[]={1,2,5,10,50,100};
while(t--){
    cin>>n;
    c=0;
    //The if condition greatly reduces the processing time by subtracting all the multiples of 100 if the number is greater
    //than 100. The counter is updated and the loop handles the rest of the calculation (very small).
    if(n>100){
        x=n/100;
        n-=100*x;
        c=x;
    }
    for(int j=0;n>0;j++){
        for(int i=5;i>=0;i--){
            if(n>=d[i]){
                n-=d[i];
                c+=1;
                cout<<n<<" "<<d[i]<<" "<<c<<endl;
                break;
            }
    }
    }
    cout<<c<<endl;
}
}
