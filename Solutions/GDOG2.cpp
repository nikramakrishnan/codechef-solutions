#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,k,m=0;
       cin>>n>>k;
       while(k)
       {
           if(n%k>m)
        m=n%k;
        k--;
       }
       cout<<m<<endl;
   }
return 0;
}
