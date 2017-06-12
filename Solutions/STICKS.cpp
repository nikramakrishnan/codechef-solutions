#include<iostream>
using namespace std;
int main(){
int t,n,a,x,y;
cin>>t;
int state[1001],rect[1001],sq[1001];
while(t--){
    cin>>n;
    int arrec=0,arsq=0,arsr=0;
    for(int i=0;i<1001;i++){
        state[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>a;
        state[a]++;
    }
    x=0;y=0;
    for(int i=1;i<1001;i++){
        if(state[i]>1 && state[i]<4){
            rect[x]=i;
            x++;
        }
        else if(state[i]>=4){
            sq[y]=i;
            y++;
        }
    }
    if(x==0 && y==0) cout<<"-1"<<endl;
    else if(x==1 && y>0){
        arrec=rect[x-1]*sq[y-1];
        arsq=sq[y-1]*sq[y-1];
        if(arrec>arsq) cout<<arrec<<endl;
        else if(arsq>=arrec) cout<<arsq<<endl;
    }
    else{
        //cout<<"Entered last if cond"<<endl;
        if(x>1) arrec=rect[x-1]*rect[x-2];
        else arrec=0;
        if(y>0) arsq=sq[y-1]*sq[y-1];
        else arsq=0;
        if(x>1 && y>0) arsr=sq[y-1]*rect[x-1];
        else arsr=0;
        if(arrec==0 && arsq==0) cout<<"-1"<<endl;
        else{
        if(arrec>arsq){
            if(arrec>=arsr) cout<<arrec<<endl;
            else cout<<arsr<<endl;
        }
        else if(arsq>=arrec){
            if(arsq>=arsr) cout<<arsq<<endl;
            else cout<<arsr<<endl;
        }
        }
    }
}
}
