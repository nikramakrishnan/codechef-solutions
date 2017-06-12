//This program takes numbers a (0<a<40001) and b (0<b<2^250) and finds their GCD. As int cannot handle such a large number, we use string.
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(){
int t,num1;
string num2; //num2 will be input as a string
cin>>t;
while(t--){
    cin>>num1>>num2;
    if(num1==0) cout<<num2<<endl; //if num1 is 0, GCD is num2;
    else{
        int px=0,y=0;
        for(int i=0;num2[i]!='\0';i++){ //Loop executes till num2[i] is 0;
            int x=num2[i]-'0'; //x is defined as the ith digit of num2
            px=y*10+x; //px multiplies the current stored value by 10 to allow the latest x to be added to units place.
            //cout<<"px="<<px<<endl; //Internal Processing
			y=px%num1; //y mods px by the first smaller number so that extras are eliminated and we can send the minimum number possible to the GCD function.
			//cout<<"y="<<y<<endl; //Internal Processing
        }
    cout<<gcd(y,num1)<<endl;
    }
}
}
