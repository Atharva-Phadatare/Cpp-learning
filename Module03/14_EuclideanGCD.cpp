#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
    int a,b,small,large;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
     if(a<b)
    {
        small=a;
        large=b;
    }
    else{
        small=b;
        large=a;
    }
    cout<<"GCD: "<<gcd(large,small)<<endl;
    return 0;
}
int gcd(int a,int b)
{
    int rem;
   while(a%b!=0)
   {
     rem=a%b;
     a=b;
     b=rem;
   }
   return b;
}