#include <iostream>
using namespace std;
int main()
{
    int a= 0;
    int b= 0;
    int sum,diff,mult;
    double quo;

    cout<<"Enter 2 numbers: "<<endl;
    cin>>a;
    cin>>b;

    sum = a + b;
    diff= a - b;
    mult= a * b;
    quo= (double)a / b;

    cout<<"Sum: "<<sum<<endl;
    cout<<"Difference: "<<diff<<endl;
    cout<<"Product: "<<mult<<endl;
    cout<<"Quotient: "<<quo<<endl;
    return 0;
}