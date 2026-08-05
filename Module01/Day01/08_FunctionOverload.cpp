#include <iostream>
#include <string.h>
using namespace std;
void greet();
void greet(string name1);
int add(int,int);
double add(double,double);
int main()
{
    greet();
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    greet(name);
    cout << add(5, 10) << endl;
     cout << add(5.5, 10.5) << endl;
    return 0;
}
void greet()
{
    cout<<"Welcome guest!!"<<endl;
}
void greet(string name1)
{
     cout<<"Hello "<<name1<<" !!"<<endl;
}
int add(int a,int b)
{
    int sum = a + b;
    return sum;
}
double add(double a,double b)
{
    double sum = a + b;
    return sum;
}