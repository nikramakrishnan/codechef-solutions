#include<iostream>
using namespace std;
int main(){
int t,n,m;
string color;
cin>>t;
//cout<<"Initiating "<<t<<" test cases. Please enter values\n";
while(t--){
    cin>>n;
    //cout<<"Understood. There are "<<n<<" rooms.\n";
    cin>>color;
    //cout<<"The colors of the rooms are "<<color<<endl;
    int r=0,g=0,b=0;
    for(int i=0;i<n;i++){
        //cout<<"Processing loop number "<<i+1<<endl;
        if(color[i]=='R') r++;
        else if(color[i]=='G') g++;
        else if(color[i]=='B') b++;
        //cout<<"Counts after loop number "<<i+1<<"-\nR - "<<r<<"\nG - "<<g<<"\nB - "<<b<<endl;
    }
    if(r>=g && r>=b) m=r;
    else if(g>=r && g>=b) m=g;
    else if(b>=r && b>=g) m=b;
    cout<<n-m<<endl;
}
}
