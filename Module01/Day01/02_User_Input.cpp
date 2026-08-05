#include <iostream>
using namespace std;
int main()
{
    string name="";
    int age=0;
    float CGPA=0.0;
    
    cout<<"Enter you name: ";
    cin>>name;

    cout<<"Enter you Age: ";
    cin>>age;

    cout<<"Enter you cgpa: ";
    cin>>CGPA;

    cout << "\n===== YOUR PROFILE =====\n";

    cout<<"Name: "<<name<<endl;

    cout<<"Age: "<<age<<endl;

    cout<<"cgpa: "<<CGPA<<endl;

    return 0;
}