    #include<iostream>
    #include<stdio.h>
    using namespace std;
    int main(){
    int t,n,x,l,f;
    cin>>t;
    while(t--){
        cin>>n;
        int time=0,wait=0;
        for(int i=0;i<n;i++){
            scanf("%d%d%d",&x,&l,&f);
            wait=x;
            while(time>wait) wait+=f;
            wait=wait-time;
            time+=wait;
            time+=l;
        }
        printf("%d\n",time);
    }
    }
