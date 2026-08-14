#include<iostream>
#include<set>
using namespace std;
int main()
{
    int x;
    set<int> unique;
    multiset<int> all;
    cout<<"Enter 10 numbers: ";
    for(int i=0;i<10;i++)
    {
        cin>>x;
        unique.insert(x);
        all.insert(x);
    }
    cout<<"SET: "<<endl;
    for(auto p: unique)
    {
        cout<<p<<" ";
    }
    cout<<"MULTISET: "<<endl;
    for(auto p: all)
    {
        cout<<p<<" ";
    }
    cout<<"Enter a number: ";
    cin>>x;
    auto res=all.find(x);
    if(res!=all.end())
    {
        cout<<"Element Found in SET."<<endl;
        cout<<"Elemnt occured in MULTISET: "<<all.count(x)<<endl;
        all.erase(res);
        cout<<"Element removed once."<<endl;
        for(auto p: all)
        {
             cout<<p<<" ";
        }
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    return 0;
}