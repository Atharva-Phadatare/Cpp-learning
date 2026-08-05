#include <iostream>
using namespace std;
const double PI = 3.14;
int main()
{
    double radius=0.0;
    double length=0.0;
    double breadth=0.0;
    double height=0.0;
    double base=0.0;

    //Area of circle
    cout<<"Enter the radius: "<<endl;
    cin>>radius;
    cout<<"Area of Circle: "<<PI*radius*radius<<endl;

    //Area of Rectangle
    cout<<"Enter the length: "<<endl;
    cin>>length;
    cout<<"Enter the breadth: "<<endl;
    cin>>breadth;
    cout<<"Area of Rectangle: "<<length*breadth<<endl;
    
    //Area of Triangle
    cout<<"Enter the height: "<<endl;
    cin>>height;
    cout<<"Enter the base: "<<endl;
    cin>>base;
    cout<<"Area of triangle: "<<0.5*base*height<<endl;

    return 0;
}