#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
std::ios::sync_with_stdio(false); //THIS REDUCES THE TIME TO PROCESS I/O STREAMS CIN AND COUT SO THE EXCECUTION TIME REDUCES
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int m;
    int nsq=n*n;
    int x[nsq+1],y[nsq+1];
    long int cx,cy,c,ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m; //We do not need this once the array stores the x and y coords of the number
            x[m]=i; //This stores the x coord of the number in the array
            y[m]=j; //This stores the y coord of the number in the array
        }
    }
    for(int i=1;i<nsq;i++){
        cx=abs(x[i+1]-x[i]); //Subtract the x coordinates and get the absolute value to get the minimum number of steps required
        cy=abs(y[i+1]-y[i]);
        c=cx+cy; //add to get the total number of steps per number
        ans+=c; //add this value to the final answer.
    }
    cout<<ans<<endl;
}
}
