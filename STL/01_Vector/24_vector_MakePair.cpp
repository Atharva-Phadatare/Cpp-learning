#include<iostream>
#include<string>
using namespace std;
int main()
{
   auto student = make_pair(18,"Atharva");
    cout<<"Age: "<<student.first<<endl;
    cout<<"Name: "<<student.second<<endl;
    return 0;
}    