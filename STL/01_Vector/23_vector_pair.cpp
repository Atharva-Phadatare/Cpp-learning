#include<iostream>
#include<string>
using namespace std;
int main()
{
    pair<int,string> student={18,"Atharva"};
    cout<<"Age: "<<student.first<<endl;
    cout<<"Name: "<<student.second<<endl;
    student.first=19;
    student.second="Alex";
    cout<<"Age: "<<student.first<<endl;
    cout<<"Name: "<<student.second<<endl;
    return 0;
}