#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;

    if( year%400==0 || (year%4==0 && year%100!=0) )
    {
        cout<<"Its a leap year."<<endl;
    }
    else{
        cout<<"Its a not leap year."<<endl;
    }
     return 0;
}