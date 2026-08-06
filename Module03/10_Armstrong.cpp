#include <iostream>
using namespace std;
int main()
{
    int num,temp;
    int sum=0;
    cout<<"Enter number: ";
    cin>>num;
    temp=num;
    int x;
    while(num!=0)
    {
        x=(num%10);
        sum+=(x*x*x);
        num=num/10;
    }
    if(sum==temp)
    {
        cout<<"It is an Armstrong number."<<endl;
    }
    else{
        cout<<"It is not an Armstrong number."<<endl;
    }
}