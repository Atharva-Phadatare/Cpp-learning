#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    int a=0;
    int b=1;
     if(num>=1)
     {
       cout<<0<<" ";
     }
     if(num>=2)
     {
       cout<<1<<" ";
     } 
    for(int i=3;i<=num;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
    return 0;
}