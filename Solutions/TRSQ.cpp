    #include <iostream>
    #include <stdio.h>
    using namespace std;
    int main(){
    long int t;
    int base;
    int b[10000];
    int result=0;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>b[i];
    }
    for(int j=0;j<t;j++){
        if(b[j]!=0 || b[j]!=1 || b[j]!=2 || b[j]!=3){
            if(b[j]%2==0){ base=(b[j]-2)/2;}
            else {base=(b[j]-3)/2;}
            for(int k=0;k<=base;k++){
                result=result+k;
            }
            cout<<result<<"\n";
            result=0;
        }
        else {cout << "0\n";result=0;}
    }
    }
