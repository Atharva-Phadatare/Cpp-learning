#include<iostream>
#include<set>
using namespace std;
int main()
{
    int x;
    set<int> s;
    cout<<"Enter 6 numbers: ";
    for(int i=0;i<6;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cout<<"Set is: "<<endl;
    for(auto p:s)
    {
        cout<<p<<" ";
    }
    cout<<"Input number: ";
    cin>>x;
    auto res=s.find(x);
    cout << "Unique values: " << s.size() << endl;
    if(res!=s.end())
    {
        cout<<"Number Found"<<endl;
        s.erase(x);
        cout<<"Number Erased"<<endl;
    }
    else{
        cout<<"Number Not Found"<<endl;
    }
    set<int>::iterator z =s.begin();
    for(;z!=s.end();z++)
    {
        cout<<*z<<" ";
    }
    return 0;
}