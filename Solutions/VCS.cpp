#include<iostream>
using namespace std;
int main(){
int t,n,m,k,ans1,ans2;
cin>>t;
while(t--){
    ans1=0;
    cin>>n>>m>>k;
    int ign[m],tra;
    for(int i=0;i<m;i++){
        cin>>ign[i];
    }
    for(int j=0;j<k;j++){
        cin>>tra;   //We don't need an array for this because this data is irrelevant out of the loop. More explanation below
        for(int a=0;a<m;a++){
            if(tra==ign[a]) ans1+=1; //So this loop checks if the input value of tra is equal to any value in ign and increments ans1
        }
    }
    ans2=n+ans1-(m+k);  //This is the tricky part. So we subtract the obviously already present values of m and k from the total number (n). But this also means that the values that were present in both sequences were subtracted twice. We add it back once by adding ans1 to get the final ans2.
    cout<<ans1<<" "<<ans2<<endl;
}
}
