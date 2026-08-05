#include<iostream>
using namespace std;
int main()
{
    double Cel = 0.0;
    double Farh = 0.0;
    double Res1,Res2;

    cout<<"========== TEMPERATURE CONVERTER =========="<<endl;
    cout<<"Input Temperature in celsius: ";
    cin>>Cel;
    Res1 =  (Cel * 1.8) + 32;
    cout<<"In Farhenite: "<<Res1<<endl;

    cout<<"Input Temperature in Farhenite: ";
    cin>>Farh;
    Res2 =  (Farh - 32) * 0.55;
    cout<<"In Celsius: "<<Res2<<endl;

    return 0;
}