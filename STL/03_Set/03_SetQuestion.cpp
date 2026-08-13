#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s = {12, 5, 30, 7, 20, 5, 12};
    for(auto p:s)
    {
        cout<<p<<" ";
    }
    cout<<"Size: "<<s.size()<<endl;
    int num;
    cout<<"ENter Number: ";
    cin>>num;
    if(s.count(num))
    {
       s.erase(num);
    }
    else{
        cout<<"Number Not Found."<<endl;
    }
    for(auto p:s)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    if(s.empty())
    {
        cout<<"Set is empty"<<endl;
    }
    else{
        cout<<"Set is not empty"<<endl;
    }
    return 0;
}