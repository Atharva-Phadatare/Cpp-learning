#include<iostream>
using namespace std;
int main()
{
    int num,x;
    cout<<"ENter the number: ";
    cin>>num;
    for(int i=2;i<=num;i++)
    {
        bool prime=true;
        for(int x=2;x*x<=i;x++)
        {
            if(i%x==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}