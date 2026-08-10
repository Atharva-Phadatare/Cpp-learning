#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
    int a,b,small,large,GCD,LCM,prod;
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
    GCD=gcd(large,small);
    prod=large*small;
    if(prod<0)
    {
        prod=-prod;
    }
    LCM=prod/GCD;
    cout<<"LCM: "<<LCM<<endl;
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