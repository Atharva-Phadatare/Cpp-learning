#include<iostream>
using namespace std;
int maximum(int,int,int);
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Maximum is: "<<maximum(a,b,c);
    return 0;
}
int maximum(int a,int b,int c)
{
    int max=a;
    if(b>max)
    {
        max=b;
    }
   if(c>max)
      {
        max=c;
       }
    return max;
}