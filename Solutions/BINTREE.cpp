#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int n,i,j,c;
scanf("%d",&n);
while(n--){
    c=0;
    scanf("%d",&i);
    scanf("%d",&j);
    while(i!=j){
    if(i>j){
        c++;
        i=i/2;
    }
    else if(j>i){
        c++;
        j=j/2;
    }
    }
    printf("%d\n",c);
}
}
