#include <iostream>
#include <string>
using namespace std;
int main()
{
    string realusername = "admin";
    int realpassword = 1234;

    string username="";
    int password=0;
    cout<<"Enter your username: ";
    cin>>username;
    cout<<"Enter your Password: ";
    cin>>password;

    if(username==realusername && password==realpassword)
    {
        cout<<"Login succesful"<<endl;
    }
    else if(username!=realusername && password!=realpassword)
    {
        cout<<"Invaild username and password"<<endl;    
    }
    else if(username!=realusername)
    {
        cout<<"Invalid username"<<endl;
    }
    else 
    {
        cout<<"Invalid Password"<<endl;
    }
    return 0;
}