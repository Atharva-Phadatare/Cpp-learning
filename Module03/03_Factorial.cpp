#include <iostream>
using namespace std;
int main()
{
    int num;
    int Fact=1;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1 ; i<=num ; i++)
    {
        Fact*=i;
    }
    cout<<"Factorial: "<<Fact<<endl;
    return 0;

}