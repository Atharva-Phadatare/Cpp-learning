#include <iostream>
using namespace std;
int main()
{
    int num;
    int revnum=0;
    cout<<"Enter number: ";
    cin>>num;
   while(num!=0)
   {
    revnum = revnum*10 + (num%10);
    num=num/10;
   }
    cout<<"Reverse: "<<revnum<<endl;
    return 0;
}