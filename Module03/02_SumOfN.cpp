#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    int i=1;
    while(i<=num)
    {
        sum+=i;
        i++;
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;

}