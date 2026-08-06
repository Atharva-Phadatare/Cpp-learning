#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int max=0;

    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

     if(a==b && b==c)
     {
         cout<<"numbers are equal.";
     }
     else if(a>=b && a>=c)
     {
         cout<<"Maximum: "<<a;
     }
    else if(b>=a && b>=c)
     {
         cout<<"Maximum: "<<b;
      }
     else
      {
        cout<<"Maximum: "<<c;
      }
    return 0;
}