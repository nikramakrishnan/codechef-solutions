#include<iostream>
using namespace std;
int main(){
int t,r,c;
char s[106][106];
cin>>t;
while(t--){
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>s[i][j];
        }
    }
    int flag=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
			if((a[j][i]=='s'||a[j][i]=='S')&&(a[j][i+1]=='p'||a[j][i+1]=='P')&&(a[j][i+2]=='o'||a[j][i+2]=='O')&&(a[j][i+3]=='o'||a[j][i+3]=='O')&&(a[j][i+4]=='n'||a[j][i+4]=='N'))                flag=1;
                break;
            }
            else if((s[i][j]=='s'||s[i][j]=='S') && (s[i+1][j]=='p'||s[i+1][j]=='P') && (s[i+2][j]=='o'||s[i+2][j]=='O') && (s[i+3][j]=='o'||s[i+3][j]=='O') && (s[i+4][j]=='n'||s[i+4][j]=='N')){
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }
    if(flag==1){
        cout<<"There is a spoon!\n";
    }
    else cout<<"There is indeed no spoon!\n";
}
}
