#include <iostream>
using namespace std;
int main()
{
    int num;
    int digits=1;
    cout<<"Enter number: ";
    cin>>num;
    int i=10;
    while(num/i!=0)
    {
        num=num/i;
        digits++;
        
    }
    cout<<"Digits: "<<digits<<endl;
    return 0;
   
}