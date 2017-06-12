#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t,m,x,y,cover,low,high,a,b,c,ans;
cin>>t;
while(t--){
    cin>>m>>x>>y;
    int h[m];
    low=0;high=0;a=0;b=0;c=0;
    for(int i=0;i<m;i++){
        cin>>h[i];
    }
    cover=x*y;
    sort(h,h+m); //Sort the house numbers so that we can easily analyze the problem
    for(int j=0;j<m;j++){
        if(h[j]<=cover) a=1; //This prevents the lower range number from becoming negative
        else a=h[j]-cover;
        if((h[j]+cover)>100) b=100; //This prevents higher range number from exceeding 100
        else b=h[j]+cover;
        //cout<<"Low "<<j<<"="<<a<<". High "<<j<<"="<<b<<endl; //Internal Analysis
        if(a<=high) low=high+1; //This checks for overlapping houses and eliminates them
        else low=a;
        high=b; //This sets the new value of high after low is corrected to exclude houses already counted
        //cout<<"final low = "<<low<<endl;  //Internal Analysis
        c=c+((high-low)+1); //This is where the number of unsafe houses are counted
        //cout<<"count ="<<c<<endl; //Internal Analysis
    }
    ans=100-c;
    cout<<ans<<endl;
}
}
