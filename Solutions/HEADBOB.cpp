    #include<iostream>
    #include<string>
    using namespace std;
    int main(){
    int t,n,x,y,z;
    char c[1000];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        x=0;y=0;z=0;
        for(int j=0;j<n;j++){
            cin>>c[j];
        }
        for(int k=0;k<n;k++){
            if(c[k]=='I') x+=1;
            if(c[k]=='Y') y+=1;
            if(c[k]=='N') z+=1;
        }
        if(x!=0 && y==0) {cout<<"INDIAN"<<endl;}
        else if(x==0 && y==0) {cout<<"NOT SURE"<<endl;}
        else {cout<<"NOT INDIAN"<<endl;}
    }
    }
