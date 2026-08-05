#include<iostream>
using namespace std;
int main()
{
    int a= 0;
    int b= 0;
    
    cout<<"Enter 2 number: "<<endl;
    cin>>a>>b;

    cout<<"Before Swap: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    //Using temporary variable
    /*int temp;
    temp=a;
    a=b;
    b=temp;*/
    
    a=a + b;
    b=a - b;
    a=a - b;

    cout<<"After Swap: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}