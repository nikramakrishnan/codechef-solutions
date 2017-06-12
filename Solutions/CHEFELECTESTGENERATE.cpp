#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int v1;
for(int i=0;i<1000;i++){
v1 = rand() % 2;
cout<<v1;
}
cout<<endl;
for(int i=0;i<1000;i++){
    cout<<i+1<<" ";
}
}
