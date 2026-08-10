#include<iostream>
using namespace std;
int main()
{
    int num1,num2,small;
    cout<<"Enter two numbers: ";
    int GCD=1;
    cin>>num1>>num2;
    if(num1<num2)
    {
        small=num1;
    }
    else{
        small=num2;
    }

    for(int i=small;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            GCD=i;
            break;
        }
    }
     cout<<"GCD: "<<GCD<<endl;
     return 0;
}