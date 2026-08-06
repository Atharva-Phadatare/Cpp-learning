#include <iostream>
using namespace std;
int main()
{
    bool prime=true;
    int num;
    cout<<"Enter number: ";
    cin>>num;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            prime=false;
            break;
        }
    }
    if(num <= 1)
    {
    prime = false;
    }
    if(prime)
    {
        cout<<"It is prime"<<endl;
    }
    else{
        cout<<"It is not prime"<<endl;
    }
}