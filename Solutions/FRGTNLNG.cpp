//SIMPLE MORTHODOLOGY. CHANGE TO VECTORS IF POSSIBLE
#include<iostream>
using namespace std;
int main(){
int t,n,k,m;
cin>>t;
while(t--){
    cin>>n>>k; //n=number of words in old language; k=number of phrases of modern language
    int c[200]={0};
    string f[200];
    for(int i=0;i<n;i++){
        cin>>f[i]; //Input strings of old language
    }
    for(int j=0;j<k;j++){ //k lines of modern phrase
        cin>>m; //m words in j(th) line
        string modern;
        for(int x=0;x<m;x++){ //Accept m phrases
            cin>>modern;
            for(int y=0;y<n;y++){
                if(modern==f[y]) {c[y]=1;} //compare each input with n phrases of first line.
            }
        }
    }
    for(int fi=0;fi<n;fi++){
        if(!(c[fi]==0)) cout<<"YES ";
        else cout<<"NO ";
    }
    cout<<endl;
}
}
