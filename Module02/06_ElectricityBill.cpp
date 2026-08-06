#include<iostream>
using namespace std;
int main()
{
    int units;
    cout<<"Enter units: ";
    cin>>units;
    int bill=0;

    if(units>0 && units<=100)
    {
        bill = units*5;
    }
    else if(units>100 && units<=200)
    {
        bill =  (units-100)*7 + 500;
    }
    else if(units>200)
    {
        bill= (units-200)*10 + 1200;
    }
    else{
        cout<<"Input valid units."<<endl;
    }
    cout<<"The bill: "<<bill<<endl;
    return 0;
}
