/*Important notes. Read this before you read/copy my code.
HINT:
To determine whether a year is a leap year, follow these steps:

    1.If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
    2.If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
    3.If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
    4.The year is a leap year (it has 366 days).
    5.The year is not a leap year (it has 365 days).

Now go try writing the program again.
*/

#include<iostream>
using namespace std;
int main(){
int t,y,day;
cin>>t;
while(t--){
    cin>>y;
    day=0;
    for(int i=1900;i<=y;i++){
        if((i%400)==1) day+=2;
        else if((i%100)==1) day++;
        else if((i%4)==1) day+=2;
        else day++;
        day=(day)%7;
    }
    switch(day){
        case 0: cout<<"sunday"<<endl;break;
        case 1: cout<<"monday"<<endl;break;
        case 2: cout<<"tuesday"<<endl;break;
        case 3: cout<<"wednesday"<<endl;break;
        case 4: cout<<"thursday"<<endl;break;
        case 5: cout<<"friday"<<endl;break;
        case 6: cout<<"saturday"<<endl;break;
    }

}
}
